/*

Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".

Example 1:

Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"

*/

class Solution {
public:
    string defangIPaddr(string address) {
        string answer="";
        int i;
        for(i=0;i<address.size();i++)
        {
            if(address[i]=='.')
            {
                answer+="[.]";
            }
            else
            {
                answer+=address[i];
            }
        }
        return answer;
    }
};
