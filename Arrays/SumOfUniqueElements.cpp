/*
You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.

Return the sum of all the unique elements of nums.

*/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int i,j,sum=0;
        for(i=0;i<nums.size();i++)
        {int cnt=0;
            for(j=0;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                    cnt++;
                }
            }
            if(cnt==1)
            {
                sum+=nums[i];
            }
        }
        return sum;
    }
};
