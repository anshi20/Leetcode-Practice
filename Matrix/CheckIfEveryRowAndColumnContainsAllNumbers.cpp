/*

An n x n matrix is valid if every row and every column contains all the integers from 1 to n (inclusive).

Given an n x n integer matrix matrix, return true if the matrix is valid. Otherwise, return false.

*/

class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int i,j,n=matrix.size();
        for(i=0;i<n;i++)
        {
            unordered_map<int,int> m;
            for(j=0;j<n;j++)
            {
                m[matrix[i][j]]++;
            }
            if(m.size()!=n)
                return false;
        }
        for(i=0;i<n;i++)
        {
            unordered_map<int,int> m;
            for(j=0;j<n;j++)
            {
                m[matrix[j][i]]++;
            }
            if(m.size()!=n)
                return false;
        }
        return true;
    }
};
