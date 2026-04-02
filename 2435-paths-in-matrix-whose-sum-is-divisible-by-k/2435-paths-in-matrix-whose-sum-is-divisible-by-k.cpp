class Solution {
public:
    int l;
    int h=1e9+7;
    int f(int i,int j,int r,int c,vector<vector<int>>& grid,vector<vector<vector<int>>>& dp,int sum){
        if(i==r-1 && j==c-1){
            if((sum+grid[i][j])%l==0){
                return 1;
            }
            return 0;
        }
        if(i>=r || j>=c){
            return 0;
        }
        if(dp[i][j][sum]!=-1) return dp[i][j][sum];
        int right=f(i,j+1,r,c,grid,dp,(sum+grid[i][j])%l);
        int left=f(i+1,j,r,c,grid,dp,(sum+grid[i][j])%l);
        return dp[i][j][sum]=(left+right)%h;
    }
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        l=k;
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<vector<int>>> dp(r,vector<vector<int>>(c,vector<int>(k+1,-1)));
        return f(0,0,r,c,grid,dp,0);
    }
};