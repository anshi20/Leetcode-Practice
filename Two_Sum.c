/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


int* twoSum(int nums[], int numsSize, int target, int* returnSize){
  int* ans = (int*)malloc(2*sizeof(int));
  int i,j,n=numsSize;
  for(i=0;i<n-1;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(nums[i]+nums[j]==target)
          {
              ans[0]=i;
              ans[1]=j;
              break;
          }
      }
  }
  *returnSize = 2;
  return ans;
}
