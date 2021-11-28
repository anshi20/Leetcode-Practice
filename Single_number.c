//   Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.


int singleNumber(int nums[], int numsSize){
  int xor= 0, n = numsSize ;
  for(int i=0;i<n;i++)
  {
      xor = xor ^ nums[i];
  }
  return xor;
}
