class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>s1(26,0);
        vector<int>s2(26,0);
        for(auto it:s) s1[it-'a']++;
        for(auto it:t) s2[it-'a']++;
        int res=0;
        for(int i=0;i<26;i++)
        {
            cout<<s1[i]<<" "<<s2[i]<<" ";
            cout<<endl;
            res+=abs(s1[i]-s2[i]);
        }
        return res/2;
    }
};
