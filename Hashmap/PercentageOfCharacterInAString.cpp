/*

Given a string s and a character letter, return the percentage of characters in s that equal letter rounded down to the nearest whole percent.

Example 1:

Input: s = "foobar", letter = "o"
Output: 33
Explanation:
The percentage of characters in s that equal the letter 'o' is 2 / 6 * 100% = 33% when rounded down, so we return 33.

*/

class Solution {
public:
    int percentageLetter(string s, char letter) {
        unordered_map <char,int> m;
        int x;
        for(auto i : s)
        {
            m[i]++;
        }
        int n = s.length();
        int flag=0;
        for(auto i : m)
        {
            if(i.first==letter)
            {
                flag=1;
                cout<<i.first <<endl;
                cout<<i.second;
                x = (i.second*100)/n;
            }
        }
        
        if(flag==0)
            return 0;
        return x;
    }
};
