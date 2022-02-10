/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Strategy used : First fill up the non-xero elements at the starting indices of the array and then fill up the remaining places by 0.
*/


void moveZeroes(int* nums, int numsSize){
   int i,count=0;
   for(i=0;i<numsSize;i++)
   {
      if(*(nums+i)!=0)
      {
          *(nums+count)=*(nums+i);
          count++;
      }
   }
    int j=count;
    while(j<numsSize)
    {
        *(nums+j)=0;
        j++;
    }
    for(i=0;i<numsSize;i++)
    {
        printf("%d ",*(nums+i));
    }
}
