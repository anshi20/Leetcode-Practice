/*
You are given four integers row, cols, rCenter, and cCenter. There is a rows x cols matrix and you are on the cell with the coordinates (rCenter, cCenter).

Return the coordinates of all cells in the matrix, sorted by their distance from (rCenter, cCenter) from the smallest distance to the largest distance.
You may return the answer in any order that satisfies this condition.

The distance between two cells (r1, c1) and (r2, c2) is |r1 - r2| + |c1 - c2|.
*/

class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<pair<int,pair<int,int>>> v;
        vector<vector<int>> v1;
        int i;
        for(i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                int d=abs(rCenter-i)+abs(cCenter-j);
                v.push_back({d,make_pair(i,j)});
            }
        }
        sort(v.begin(),v.end());
        int m=v.size();
        for(i=0;i<v.size();i++)
            v1.push_back({v[i].second.first,v[i].second.second});
        return v1;
    }
};
