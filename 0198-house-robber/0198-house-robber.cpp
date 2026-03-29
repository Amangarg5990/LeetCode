class Solution {
public:
    int helper(vector<int>& dp,int idx,vector<int> he){
        if(idx<0) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int safe=helper(dp,idx-2,he)+he[idx];
        int alarm=helper(dp,idx-1,he);
        return dp[idx]=max(safe,alarm);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return helper(dp,n-1,nums);
    }
};