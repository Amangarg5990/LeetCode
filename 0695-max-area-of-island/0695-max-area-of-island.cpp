class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i,int j,int& t){
        int n=grid.size();
        int m=grid[0].size();
        if(i<0 ||i>=n || j<0 || j>=m || grid[i][j]!=1){
            return ;
        }
        t++;
        grid[i][j]=0;
        dfs(grid,i-1,j,t);
        dfs(grid,i+1,j,t);
        dfs(grid,i,j-1,t);
        dfs(grid,i,j+1,t);

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int k=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    int t=0;
                    dfs(grid,i,j,t);
                    k=max(k,t);
                }
            }
        } 
        if(k==INT_MIN){
            return 0;
        }
        return k;
    }
};