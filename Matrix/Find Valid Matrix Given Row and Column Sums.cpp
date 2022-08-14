/*
You are given two arrays rowSum and colSum of non-negative integers :  
where rowSum[i] is the sum of the elements in the ith row and colSum[j] is the sum of the elements of the jth column of a 2D matrix. 
In other words, you do not know the elements of the matrix, but you do know the sums of each row and column.

Find any matrix of non-negative integers of size rowSum.length x colSum.length that satisfies the rowSum and colSum requirements.

Return a 2D array representing any matrix that fulfills the requirements. It's guaranteed that at least one matrix that fulfills the requirements exists.
*/

class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
       int m=colSum.size();
       int n=rowSum.size();
        vector<vector<int>> v(n, vector<int>(m, 0));
       int i,j;
       for(i=0;i<n;i++)
       {
            for(j=0;j<m;j++)
            {
                int x = min(colSum[j],rowSum[i]);
                v[i][j]=x;
                colSum[j]=colSum[j]-x;
                rowSum[i]=rowSum[i]-x;
            }
       }
        return v;
    }
};
