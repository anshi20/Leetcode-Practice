/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int i, x;
      for(i=nums.size()-1;i>0;i--)
      {
          x=(nums[i]^nums[i-1]);
          if(x==0)
              return true;
      }
        return false;
   
    }
};
