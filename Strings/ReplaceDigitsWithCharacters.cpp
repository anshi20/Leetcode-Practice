/*
You are given a 0-indexed string s that has lowercase English letters in its even indices and digits in its odd indices.

There is a function shift(c, x), where c is a character and x is a digit, that returns the xth character after c.

    For example, shift('a', 5) = 'f' and shift('x', 0) = 'x'.

For every odd index i, you want to replace the digit s[i] with shift(s[i-1], s[i]).

Return s after replacing all digits. It is guaranteed that shift(s[i-1], s[i]) will never exceed 'z'.

Example 1:

Input: s = "a1c1e1"
Output: "abcdef"
Explanation: The digits are replaced as follows:
- s[1] -> shift('a',1) = 'b'
- s[3] -> shift('c',1) = 'd'
- s[5] -> shift('e',1) = 'f'
*/

class Solution {
public:
    string replaceDigits(string s) {
        int i;
        string alpha="abcdefghijklmnopqrstuvwxyz";
        for(i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                int j = s[i] - 48;
                char h = s[i-1];
                while(j--)
                {h++;
                }
                s[i]= h;
            }
        }
        return s;
    }
};
