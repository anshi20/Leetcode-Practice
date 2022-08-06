/*
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
*/



class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int max=nums[0];
      int freq=1,i;
      int n=nums.size();
      for(i=1;i<n;i++)
      {
          if(nums[i]==max)
          {
              freq++;
          }
          else
              freq--;
          
          if(freq==0){
            max=nums[i];
            freq=1;
          }
      }
      return max;
    }
};


//Using map
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int> m;
       for(auto i : nums)
       {
           m[i]++;
           
       }
       
       for(auto i : nums)
       {
           if(m[i]>nums.size()/2)
               return i;
       }
       return -1;
    }
};
