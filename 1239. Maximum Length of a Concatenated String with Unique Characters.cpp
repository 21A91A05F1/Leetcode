class Solution {
public:
    int fun(int ind,int n,int s,vector<string>&arr, vector<char>&ve)
    {
        if(ind==n) return s;
        if(ind>n) return 0;
        
        string k=arr[ind];
        int f=0,a=0,b=0;
        for(auto it:k) 
        {
            ve[it-97]++;
            if(ve[it-97]>=2) f=1;
        }
        // for(auto it:ve) cout<<it<<" ";
        if(f==0)
        {   
            s+=arr[ind].size();
            a=fun(ind+1,n,s,arr,ve);
            s-=arr[ind].size();
        }
        for(auto it:k)
        {
            ve[it-97]--;
        }
        f=0;
        b=fun(ind+1,n,s,arr,ve);
        
        return max(a,b);
    }
    int maxLength(vector<string>& arr) {
        
        int n=arr.size();
        int s=0;
        vector<char>ve(26,0);
        return fun(0,n,s,arr,ve);
    }
};
