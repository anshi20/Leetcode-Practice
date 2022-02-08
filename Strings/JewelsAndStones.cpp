/*
You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".

Input:  jewels = "aA", stones = "aAAbbbb"
Output: 3
  */

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int a = stones.size();
        
        int b = jewels.size();
        
        short int i,j;
        int count=0;
        for(j=0;j<b;j++)
        { 
            for(i=0;i<a;i++)
            {
                if(stones[i]==jewels[j])
                {
                    count ++;
                }
            }
        }
        return count;
       
    }
};
