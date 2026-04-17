class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<int> min_row;
        for(int i = 0; i < r; i++) {
            vector<int> ro;
            for(int j = 0; j < c; j++) {
                ro.push_back(matrix[i][j]);
            }
            sort(ro.begin(), ro.end());
            min_row.push_back(ro[0]);
        }
        vector<int> max_col;
        for(int j = 0; j < c; j++) {
            vector<int> co;
            for(int i = 0; i < r; i++) {
                co.push_back(matrix[i][j]);
            }
            sort(co.begin(), co.end());
            max_col.push_back(co.back());
        }
        unordered_set<int> rowSet(min_row.begin(), min_row.end());
        unordered_set<int> colSet(max_col.begin(), max_col.end());
        vector<int> ans;
        for(auto x : rowSet) {
            if(colSet.count(x)) {
                ans.push_back(x);
            }
        }
        return ans;
    }
};