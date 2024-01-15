class Solution {
public:
    int fun(vector<int>&nums){
    int n=nums.size();
    int prev=nums[0];
    int prev2=0;
    for(int i=1;i<n;i++)
    {
        int take=nums[i];
        if(i>1) take+=prev2;
        int nottake=0+prev;
        int curr=max(take,nottake);
        prev2=prev;
        prev=curr;
    }
    return prev;
    }
    int rob(vector<int>& nums) {
        
        vector<int>temp1,temp2;
        int n=nums.size();
        if(n==1) return nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
        }
        return max(fun(temp1),fun(temp2));
    }
};
