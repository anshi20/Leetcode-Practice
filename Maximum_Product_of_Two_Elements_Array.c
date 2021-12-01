/*
Maximum Product of Two Elements in an Array
Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1). 

*/

int maxProduct(int nums[], int numsSize){
   int max = 0;//(nums[0]-1)*(nums[0]-1) ;
   int i,j;
   for(i=0;i<numsSize;i++)
   {
       for(j=i+1;j<numsSize;j++)
       {
           if(max <= ((nums[i]-1)*(nums[j]-1)))
           {
               max = (nums[i]-1)*(nums[j]-1);
           }
       }
   }
    return max;
}
