/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

    Open brackets must be closed by the same type of brackets.
    Open brackets must be closed in the correct order.

 Example 1:

Input: s = "()"
Output: true

Example 2:

Input: s = "()[]{}"
Output: true

Example 3:

Input: s = "(]"
Output: false

*/
class Solution {
public:
    bool isValid(string s) {
        stack<char> check;
        
        int i;
        
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                check.push(s[i]);
            else if(s[i]==')')
            {
                if(!check.empty() && check.top()=='(')
                {
                    check.pop();
                }
                else
                {
                    return false;
                }
            }
            else if(s[i]=='}')
            {
                if(!check.empty() && check.top()=='{')
                {
                    check.pop();
                }
                else
                {
                    return false;
                }
            }
            else if(s[i]==']')
            {
                 if(!check.empty() && check.top()=='[')
                {
                    check.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if(check.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
