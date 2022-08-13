/*
Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

Example 1:

Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"

*/

class Solution {
public:
    void reverse(string &s)
    {
        string i="";
        for(int j=s.length()-1;j>=0;j--)
            i+=s[j];
        s=i;
    }
    string reverseWords(string s) {
        string ans = "";
        vector<string> v;
        int i;
        for(i=0;i<s.length();i++)
        {
            string word="";
            while(s[i]!=' '&&i<s.length())
            {
                word+=s[i];
                i++;
            }
            
            v.push_back(word);
        }
        for(i=0;i<v.size()-1;i++)
        {
            reverse(v[i]);
            ans+=v[i];
            ans+=" ";
        }
        reverse(v[i]);
        ans+=v[i];
        return ans;
        
    }
};
