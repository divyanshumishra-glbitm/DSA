class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int l = matrix.size();
        int k = matrix[0].size();

        vector<int> row(l, 0);
        vector<int> col(k, 0);

        for(int i = 0; i < l; i++) {
            for(int j = 0; j < k; j++) {

                if(matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        for(int i = 0; i < l; i++) {
            for(int j = 0; j < k; j++) {

                if(row[i] == 1 || col[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};