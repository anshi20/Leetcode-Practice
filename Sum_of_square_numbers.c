/*
Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.

Example 1:

Input: c = 5
Output: true
Explanation: 1 * 1 + 2 * 2 = 5

*/

bool judgeSquareSum(int c){
     long a,b;
     for(a=0;a*a<=c;a++)
     {
         b = sqrt(c-(a*a));
         if((b*b)==c-(a*a))
         {
             return true;
             break;
         }
     }
    return false;
}
