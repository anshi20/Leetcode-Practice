/*

Given an array of integers nums, sort the array in increasing order based on the frequency of the values. 
If multiple values have the same frequency, sort them in decreasing order.
Return the sorted array.

 
Example 1:

Input: nums = [1,1,2,2,2,3]
Output: [3,1,1,2,2,2]
Explanation: '3' has a frequency of 1, '1' has a frequency of 2, and '2' has a frequency of 3.

Example 2:
Input: nums = [2,3,1,3,2]
Output: [1,3,3,2,2]
Explanation: '2' and '3' both have a frequency of 2, so they are sorted in decreasing order.

*/

bool cmp(pair<int,int> p1, pair<int,int> p2)
{
    if(p1.second!=p2.second)
      return p1.second<p2.second;
    return (p1.first>p2.first) ;
}
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto i : nums)
        {
            m[i]++;
        }
        vector<pair<int,int>> v;
        for(auto i : m)
        {
            v.push_back({i.first,i.second});
        }
        sort(v.begin(),v.end(),cmp);
        vector<int> ans;
        for(auto i : v){
            int n = i.second;
            while(n--)
            {
                ans.push_back(i.first);
            }
        }
            
        return ans;
    }
};
