// Problem: Set Matrix Zeros
// TC: O(n*M)
// SC : O(1)
// Platform : Leetcode

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        int col0 = 1;

        // Step 1: marking
        for(int i = 0; i < n; i++) {
            if(matrix[i][0] == 0) col0 = 0;

            for(int j = 1; j < m; j++) {
                if(matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Step 2: update (reverse)
        for(int i = n - 1; i >= 0; i--) {
            for(int j = m - 1; j >= 1; j--) {
                if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }

            // Step 3: first column
            if(col0 == 0) {
                matrix[i][0] = 0;
            }
        }
    }
};
