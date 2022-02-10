// Given a non-negative integer x, compute and return the square root of x.

int mySqrt(int x){
 long i;
 if(x==0)
     return 0;
 if(x==1||x==2||x==3)
     return 1;
 for(i=2;i<=x/2;i++)
 {
     if((i*i==x)|| (((i*i)<x)&&(x<(i+1)*(i+1))))
         return i;
 }
    return -1;
}
