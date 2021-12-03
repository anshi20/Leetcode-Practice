/*
Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
*/

int reverse(int x){
    int rev=0;
    int sign=1;
    if(x > INT_MAX || x<(-INT_MAX))
    {
        return 0;
    }
    if(x<0)
    {
        sign=-1;
        x*=-1;
    }
    while(x!=0)
    {
        if(rev > INT_MAX/10)
        {
             return 0;
        }
        rev=(rev*10)+(x%10);
        x/=10;
     }
    return (sign*rev);
}
