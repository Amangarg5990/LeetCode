class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        int topRow = 0, bottomRow = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;
        int m=1;
        while (topRow <= bottomRow && left <= right) {

            // Top row
            for (int i = left; i <= right; i++) {
                matrix[topRow][i]=m++;;
            }
            topRow++;

            // Right column
            for (int i = topRow; i <= bottomRow; i++) {
                matrix[i][right]=m++;;
            }
            right--;

            // Bottom row (check required)
            if (topRow <= bottomRow) {
                for (int i = right; i >= left; i--) {
                    matrix[bottomRow][i]=m++;;
                }
                bottomRow--;
            }

            // Left column (check required)
            if (left <= right) {
                for (int i = bottomRow; i >= topRow; i--) {
                    matrix[i][left]=m++;
                }
                left++;
            }
        }

        return matrix;
    }
};