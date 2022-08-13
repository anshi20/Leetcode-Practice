/*

Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.

An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. 
You may assume all four edges of the grid are all surrounded by water.

Example 1:

Input: grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]

Output: 1

Approach : dfs
*/

class Solution {
public:
    void dfs(int i,int j,vector<vector<char>>& grid, int n, int m)
    {
        if(grid[i][j]=='0'||grid[i][j]=='#')
            return;
        if(grid[i][j]=='1')
        {
            grid[i][j]='#';
            if(i>0)
              dfs(i-1,j,grid,n,m);
            if(i<n-1)
              dfs(i+1,j,grid,n,m);
            if(j>0)
              dfs(i,j-1,grid,n,m);
            if(j<m-1)
              dfs(i,j+1,grid,n,m);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int i,j,count=0;
        int n=grid.size();
        int m=grid[0].size();
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    dfs(i,j,grid,n,m);
                    count++;
                }
            }
        }
        return count;
    }
};
