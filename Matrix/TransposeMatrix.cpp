/*
Given a 2D integer array matrix, return the transpose of matrix.

The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.
*/

class Solution
{
public:
    vector<vector<int>> transpose(vector<vector<int>> &matrix)
    {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<vector<int>> newmatrix(c, vector<int>(r));
        int newrow = c, newcolumn = r;
        for (int i = 0; i < newrow; ++i)
        {
            for (int j = 0; j < newcolumn; ++j)
            {
                newmatrix[i][j] = matrix[j][i];
            }
        }
        return newmatrix;
    }
};
