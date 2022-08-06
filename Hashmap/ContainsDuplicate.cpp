/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Input: nums = [1,2,3,1]
Output: true

*/


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto i : nums)
        {
            m[i]++;
        }
        
        for(auto i : nums)
        {  
            if(m[i]>1)
                return true;
        }
        return false;
    }
};
