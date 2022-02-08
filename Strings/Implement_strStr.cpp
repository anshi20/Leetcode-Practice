/*
Implement strStr().

Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Clarification:

What should we return when needle is an empty string? This is a great question to ask during an interview.

For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().

eg:
Input: haystack = "hello", needle = "ll"
Output: 2

*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.size();
        int n = needle.size();
         if(n == 0 && h == 0) 
             return 0;
         if(n==0) 
             return 0;
         if(n > h) 
             return -1;
         for(int i=0;i+n<=h;i++){
            string temp = haystack.substr(i,n);
            if(temp == needle) 
                return i;
         }
        return -1;     
    }
};

