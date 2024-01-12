/*Memoization
Finding the max sum of alternative numbers in an array.
*/
class Solution {
public:
    int fun(int ind, vector<int> &nums , vector<int> &dp){
    if(ind==0) return nums[ind];
    if(ind<0) return 0;

    if(dp[ind]!=-1) return dp[ind];

    int pick=nums[ind]+fun(ind-2,nums,dp);
    int notpick=0+fun(ind-1,nums,dp);

    return dp[ind]=max(pick,notpick);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        int  k=fun(n-1,nums,dp);
        return k;
    }
};
