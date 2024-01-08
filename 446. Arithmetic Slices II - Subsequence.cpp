class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        vector<unordered_map<long long ,long long>>mpp(nums.size());
        int c=0;
        for(int i=1;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
               long long diff= (long long)(nums[i]- nums[j]);
                mpp[i][diff]+=1;
                mpp[i][diff]+=mpp[j][diff];
                c+=mpp[j][diff];
            }
        }
        return c;
    }
};
