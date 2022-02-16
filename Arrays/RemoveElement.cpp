/*
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i,j=0,c=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
              c++;
            }
            else
               nums[j++]=nums[i];
        }
        
        return nums.size()-c;
    }
};
