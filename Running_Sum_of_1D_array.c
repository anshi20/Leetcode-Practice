/*
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
*/


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* runningSum(int* nums, int numsSize, int* returnSize){
  int i,j;
  int* sum = (int*)malloc(numsSize*sizeof(int));
  sum[0]=nums[0];
  for(i=1;i<numsSize;i++)
  {
      sum[i]=nums[i]+sum[i-1];
  }
  *returnSize=numsSize;
   return sum; 
}
