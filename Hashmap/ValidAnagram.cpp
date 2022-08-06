//Brute Force

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> a,b; 
        if(s.length()!=t.length())
            return false;
        for(int i=0;i<s.length();i++)
            a.push_back(s[i]);
        for(int i=0;i<t.length();i++)
            b.push_back(t[i]);
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<s.length();i++)
        {
            if(a[i]!=b[i])
                return false;
        }
        return true;
    }
};


//Optimised : Using map

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> a,b; 
        if(s.length()!=t.length())
            return false;
        
        unordered_map<char,int> m;
        for(auto i : s)
        {
            m[i]++;
        }
        for(auto i : t)
        {
            m[i]--;
            if(m[i]<0)
                return false;
        }
        return true;
    }
};
