/*
A square matrix is said to be an X-Matrix if both of the following conditions hold:

All the elements in the diagonals of the matrix are non-zero.
All other elements are 0.
*/

class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int i,j,n=grid.size();
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i+j==n-1||i==j)
                {
                    if(grid[i][j]==0)
                        return false;
                }
                if(i+j!=n-1&&i!=j)
                {
                    if(grid[i][j]!=0)
                        return false;
                }
            }
        }
        return true;
    }
};
