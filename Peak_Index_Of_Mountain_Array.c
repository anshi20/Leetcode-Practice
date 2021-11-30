/*
Given an integer array arr that is guaranteed to be a mountain, return any i such that arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1]. 

Example 1:

Input: arr = [0,1,0]
Output: 1
*/

int peakIndexInMountainArray(int arr[], int arrSize){
  int i,large=arr[0],ans;
  for(i=0;i<arrSize;i++)
  {
    if(arr[i]<arr[i+1])
    { 
        continue;
    }
    else
           {
             ans=i;
             break;
           }
  }return ans;
}
