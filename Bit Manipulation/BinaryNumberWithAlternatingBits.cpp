/*
Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.

*/

class Solution {
public:
    bool hasAlternatingBits(int n) {
        int a[32],i,j;
        for(i=0;n>0;i++)
        {
            a[i]=n%2;
            n=n/2;
            
        }
        for(j=0;j<i;j++)
            cout<<a[j]<<" ";
        for(j=0;j<i;j++)
        {
            if(a[j]==a[j+1])
                return false;
        }
        return true;
    }
};
