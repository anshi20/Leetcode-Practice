/*
Given a balanced parentheses string s, return the score of the string.

The score of a balanced parentheses string is based on the following rule:

    "()" has score 1.
    AB has score A + B, where A and B are balanced parentheses strings.
    (A) has score 2 * A, where A is a balanced parentheses string.

Example 1:

Input: s = "()"
Output: 1

Example 2:

Input: s = "(())"
Output: 2

Example 3:

Input: s = "()()"
Output: 2

*/

class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<string> st;
        int i;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push("(");
            }
            else
            {
                if(st.top()=="(")
                {
                    st.pop();
                    st.push("1");
                }
                else
                {
                    int count = 0;
                    while(st.top()!= "(")
                    {
                        count+=stoi(st.top());
                        
                        st.pop();
                    }
                    st.pop();
                    count = count<<1;
                    
                    st.push(to_string(count));
                    
                
                }
            }
        }
        int ans=0;
        while(!st.empty())
        {
            
            ans = ans + stoi(st.top());
            st.pop();
        }
        return ans;
    }
};
