class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<vector<int>> ans;
        for(int i=0;i<c;i++){
            vector<int>a;
            for(int j=r-1;j>=0;j--){
                a.push_back(matrix[j][i]);
            }
            ans.push_back(a);
        }
        matrix=ans;
    }
};