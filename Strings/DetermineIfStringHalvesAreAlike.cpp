/*
You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.

Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.

Return true if a and b are alike. Otherwise, return false.
*/

class Solution {
public:
    bool halvesAreAlike(string s) {
        int len = s.size();
        int mid = (len/2) - 1;
        string first = s.substr(0,mid+1);
        cout<<first;
        
        string second = s.substr(mid+1,len-1);
        cout<<endl<<second;
        int i,countf=0,counts=0;
        for(i=0;i<first.size();i++)
        {
            if(first[i]=='a'||first[i]=='e'||first[i]=='i'||first[i]=='o'||first[i]=='u'||first[i]=='A'||first[i]=='E'||first[i]=='O'||first[i]=='I'||first[i]=='U')
            {
                countf++;
            }
            if(second[i]=='a'||second[i]=='e'||second[i]=='i'||second[i]=='o'||second[i]=='u'||second[i]=='A'||second[i]=='E'||second[i]=='O'||second[i]=='I'||second[i]=='U') 
            {
                counts++;
            }
        }
        if(countf==counts)
            return true;
        else
            return false;
    }
};
