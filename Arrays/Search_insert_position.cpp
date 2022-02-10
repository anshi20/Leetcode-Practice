/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int front=0, last=nums.size()-1;
    long middle=0;
        
    while(front<=last){
            middle = front + (last-front)/2;
            if(target<nums[(int)middle]){
                last = (int)(middle-1);
            }else if(target>nums[(int)middle]){
                front = (int)(middle+1);
            }else{
                return (int)middle;
            }
        }
        return front; 
    }
};
