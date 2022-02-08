/*

Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

*/

void swap(char* a,char* b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void reverseString(char s[], int sSize){
   int i,j;
   for(i=0,j=sSize-1;i<sSize/2;i++,j--)
   {
       swap(&s[i],&s[j]);
   }
    printf("%s",s);
}
