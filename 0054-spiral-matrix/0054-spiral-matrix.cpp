class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int topRow = 0, bottomRow = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;

        while (topRow <= bottomRow && left <= right) {

            // Top row
            for (int i = left; i <= right; i++) {
                res.push_back(matrix[topRow][i]);
            }
            topRow++;

            // Right column
            for (int i = topRow; i <= bottomRow; i++) {
                res.push_back(matrix[i][right]);
            }
            right--;

            // Bottom row (check required)
            if (topRow <= bottomRow) {
                for (int i = right; i >= left; i--) {
                    res.push_back(matrix[bottomRow][i]);
                }
                bottomRow--;
            }

            // Left column (check required)
            if (left <= right) {
                for (int i = bottomRow; i >= topRow; i--) {
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return res;
    }
};
