class Solution {
public:
    bool closeStrings(string word1, string word2) {
       if(word1.size()!=word2.size()) return false;
        map<char,int>mp1;
        map<char,int>mp2;
        vector<int>ve1,ve2;
        for(auto it:word1) mp1[it]++;
        for(auto it:word2) mp2[it]++;
        for(auto it:mp1) ve1.push_back(it.second);
        for(auto it:mp2) ve2.push_back(it.second);
        sort(ve1.begin(),ve1.end());
        sort(ve2.begin(),ve2.end());
        int f=0;
        for(auto it:mp1)
        {
            if(mp2.find(it.first)==mp2.end())
            {
                return false;
            }
        }
        return ve1==ve2;
    }
};
