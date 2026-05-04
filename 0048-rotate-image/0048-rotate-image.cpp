class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // int r=matrix.size();
        // int c=matrix[0].size();
        // vector<vector<int>> ans;
        // for(int i=0;i<c;i++){
        //     vector<int>a;
        //     for(int j=r-1;j>=0;j--){
        //         a.push_back(matrix[j][i]);
        //     }
        //     ans.push_back(a);
        // }
        // matrix=ans;


        int n = matrix.size();

    // Step 1: Transpose
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row
    for(int i = 0; i < n; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
    }
};