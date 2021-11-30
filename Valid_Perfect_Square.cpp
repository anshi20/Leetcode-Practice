/*
Given a positive integer num, write a function which returns True if num is a perfect square else False.

Follow up: Do not use any built-in library function such as sqrt.

*/

class Solution {
public:
    bool isPerfectSquare(int num){
     int i;
     if(num<1)
         return false;
     if(num==1)
         return true;
     for(long int i = 2; i*i <= num; i++)
        {
            if((num % i == 0) && (num / i == i))
                return true;
        }
    return false;
   }
};
