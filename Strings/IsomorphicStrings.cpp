/*

Given two strings s and t, determine if they are isomorphic.
Two strings s and t are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving the order of characters. 
No two characters may map to the same character, but a character may map to itself.

Example 1:

Input: s = "egg", t = "add"
Output: true

Example 2:

Input: s = "foo", t = "bar"
Output: false 

*/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int i;
        if(s.size()!=t.size())
            return false;
        unordered_map<char,char> m;
        set<char> st;
        for(i=0;i<s.size();i++)
        {
            if(m.find(s[i])!=m.end())
            {
                if(m[s[i]]!=t[i])
                    return false;
                
            }
            else
            {
                if(st.count(t[i])>0)
                    return false;
                
                m[s[i]]=t[i];
                st.insert(t[i]);
            }
        }
        return true; 
    }
};
