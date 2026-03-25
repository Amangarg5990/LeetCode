class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        // Total sum
        long long total = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                total+=grid[i][j];
            }
        }

        if(total % 2 != 0) return false;

        // 🔹 Check horizontal partition
        long long rowSum = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                rowSum += grid[i][j];
            }
            if(rowSum == total/2) return true;
        }

        // 🔹 Check vertical partition
        long long colSum = 0;
        for(int j = 0; j < m; j++){
            for(int i = 0; i < n; i++){
                colSum += grid[i][j];
            }
            if(colSum == total/2) return true;
        }

        return false;
    }
};