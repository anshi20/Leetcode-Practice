/*

Given an array of strings words where each word can be written as a concatenation of the Morse code of each letter.

Morse codes for 26 alphabets of english language : 
[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]

For example, "cab" can be written as "-.-..--...", which is the concatenation of "-.-.", ".-", and "-...". 
We will call such a concatenation the transformation of a word.
Return the number of different transformations among all words we have.

*/

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<char,string> mp;
        mp['a'] = ".-";
        mp['b'] = "-...";
        mp['c'] = "-.-.";
        mp['d'] = "-..";
        mp['e'] = ".";
        mp['f'] = "..-.";
        mp['g'] = "--.";
        mp['h'] = "....";
        mp['i'] = "..";
        mp['j'] = ".---";
        mp['k'] = "-.-";
        mp['l'] = ".-..";
        mp['m'] = "--";
        mp['n'] = "-.";
        mp['o'] = "---";
        mp['p'] = ".--.";
        mp['q'] = "--.-";
        mp['r'] = ".-.";
        mp['s'] = "...";
        mp['t'] = "-";
        mp['u'] = "..-";
        mp['v'] = "...-";
        mp['w'] = ".--";
        mp['x'] = "-..-";
        mp['y'] = "-.--";
        mp['z'] = "--..";
        int i;
        unordered_set<string> st;
        int n = words.size();
        string p="";
        int count=0;
        for(i=0;i<n;i++)
        {
            int j=0;
            while(j<words[i].size())
            {
                p+=mp[words[i][j]];
                j++;
            }
            /*cout<<"string : "<<words[i]<<" pattern : "<<p<<" count : "<<count<<endl;*/
            if(st.find(p)!=st.end())
            {
                p="";
                continue;
            }
            else
            {
                st.insert(p);
                count++;
                p="";
            }
           
        }
        return count;
    }
};
