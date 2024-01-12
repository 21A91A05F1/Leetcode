class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int>st;
        for(int i=0;i<num.size();i++)
        {
            while(!st.empty() and k>0 and st.top()>num[i])
            {
                st.pop();
                k-=1;
            }
            st.push(num[i]);
        }
        while(k!=0)
        {
            st.pop();
            k-=1;
        }
        string res;
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        // to remove leading zeroes.
        while(!res.empty() and res.back()=='0') res.pop_back();
        reverse(res.begin(),res.end());
        return res.empty() ? "0" : res;
    }
};
