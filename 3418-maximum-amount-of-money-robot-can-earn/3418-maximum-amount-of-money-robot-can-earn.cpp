class Solution {
public:
    int f(int i,int j,int n,vector<vector<int>>& coins,vector<vector<vector<int>>>& dp,int r,int c){
        if(i==r-1 && j==c-1){
            if(coins[i][j]<0 && n>0){
                return 0;
            }
            return coins[i][j];
        }
        if(i>=r || j>=c){
            return INT_MIN;
        }
        if(dp[i][j][n]!=INT_MIN) return dp[i][j][n];
        int take=coins[i][j]+max(f(i+1,j,n,coins,dp,r,c),f(i,j+1,n,coins,dp,r,c));

        int skip=INT_MIN;
        if(coins[i][j]<0 && n>0){
            int d=f(i+1,j,n-1,coins,dp,r,c);
            int ri=f(i,j+1,n-1,coins,dp,r,c);
            skip=max(d,ri);
        }
        return dp[i][j][n]=max(skip,take);
    }
    int maximumAmount(vector<vector<int>>& coins) {
        int r=coins.size();
        int c=coins[0].size();
        vector<vector<vector<int>>> dp(r,vector<vector<int>>(c, vector<int>(3,INT_MIN)));
        return f(0,0,2,coins,dp,r,c);
    }
};
