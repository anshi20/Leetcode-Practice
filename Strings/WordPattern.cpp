/*

Given a pattern and a string s, find if s follows the same pattern.

Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s.
Input: pattern = "abba", s = "dog cat cat dog"
Output: true

*/

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        vector<string> v;
        int i=0;
        string temp="";
        while(i<str.length())
        {
            if(str[i]==' ')
            {
                v.push_back(temp);
                temp="";
            }
            else
            {
                temp+=str[i];
                
            }
            i++;
        }
        v.push_back(temp);
        if(v.size()!=pattern.size())
            return false;
        unordered_map<char,string> m;
        set<string> s;
        for(i=0;i<pattern.size();i++)
        {
            if(m.find(pattern[i])!=m.end())
            {
                if(m[pattern[i]]!=v[i])
                    return false;
                
            }
            else
            {
                if(s.find(v[i])!=s.end())
                    return false;
                
                m[pattern[i]]=v[i];
                s.insert(v[i]);
            }
        }
        return true;
    }
};
