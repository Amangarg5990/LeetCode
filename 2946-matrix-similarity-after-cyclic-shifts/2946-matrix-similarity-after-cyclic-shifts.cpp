class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> du = mat;
        // k = k % m;
        int p = 0;
        while(p < k){
            for(int i = 0; i < n; i++){
                if(i % 2 == 0){
                    int temp = mat[i][0];
                    for(int j = 0; j < m-1; j++){
                        mat[i][j] = mat[i][j+1];
                    }
                    mat[i][m-1] = temp;
                }
                else{
                    int temp2 = mat[i][m-1];
                    for(int j = m-1; j > 0; j--){
                        mat[i][j] = mat[i][j-1];
                    }
                    mat[i][0] = temp2;
                }
            }
            p++;
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(mat[i][j] != du[i][j]){
                    return false;
                }
            }
        }

        return true;
    }
};