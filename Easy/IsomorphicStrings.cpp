/* Given two strings s and t, determine if they are isomorphic.

Two strings are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself. */


class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> mpS;
        map<char, char> mpT;
	if(s.size() != t.size())
            return false;
        for(int i=0; i<s.size(); i++)
        {
            if(mpS.find(s[i]) == mpS.end() && mpT.find(t[i]) == mpT.end())
            {
                mpS.insert({s[i], t[i]});
                mpT.insert({t[i],s[i]});
            }
            else
            {
                if (mpS[s[i]] != t[i] || mpT[t[i]] != s[i])
                    return false;
            }
                
        }
        return true;
    }
};
