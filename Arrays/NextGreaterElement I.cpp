/*

You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.
For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2.
If there is no next greater element, then the answer for this query is -1.
Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.

Example 1:

Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
Output: [-1,3,-1]

*/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int i=0,j=0;
        while(i<nums1.size())
        {
            int x =  find(nums2.begin(),nums2.end(),nums1[i]) - nums2.begin();
            j=x+1;
            int flag=0;
            while(j<nums2.size()){
            if(nums2[j]>nums1[i]){
                v.push_back(nums2[j]);
                flag=1;
                break;
               }
             j++;
            }
            if(!flag)
                v.push_back(-1);
            i++;
        }
        return v;
    }
};
