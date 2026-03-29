class Solution {
public:
    int helper(vector<int>& dp,int n,int idx){
        if(idx==n) return 1;
        if(idx>n) return 0;
        if(dp[idx]!=-1) return dp[idx];
        dp[idx]=helper(dp,n,idx+1)+helper(dp,n,idx+2);
        return dp[idx];
    }
    int climbStairs(int n){
        vector<int> dp(n+1,-1);
        return helper(dp,n,0);
    }
        
};