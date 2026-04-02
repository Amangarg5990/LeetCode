class Solution {
public:
    int l;
    int h=1e9+7;
    int f(int i,int j,int r,int c,vector<vector<int>>& grid,vector<vector<int>>& dp){
        if(i==r-1 && j==c-1){
            if(grid[i][j]>0){
                return 1;
            }
            return abs(grid[i][j])+1;
        }
        if(i>=r || j>=c){
            return h;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int right=f(i,j+1,r,c,grid,dp);
        int down=f(i+1,j,r,c,grid,dp);
        int result=min(right,down)-grid[i][j];
        if(result<=0){
            return dp[i][j]=1;
        }
        return dp[i][j]=result;
        
    }
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int r=dungeon.size();
        int c=dungeon[0].size();
        vector<vector<int>> dp (r,vector<int>(c,-1));
        return f(0,0,r,c,dungeon,dp);
    }
};