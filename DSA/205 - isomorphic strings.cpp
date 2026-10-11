205. Isomorphic Strings

Given two strings s and t, determine if they are isomorphic.
Two strings s and t are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving the order of characters.
No two characters may map to the same character, but a character may map to itself.

Example 1:

Input: s = "egg", t = "add"
Output: true

Explanation:
The strings s and t can be made identical by:

Mapping 'e' to 'a'.
Mapping 'g' to 'd'.


// Solution

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mapST, mapTS;
        for (int i = 0; i < s.size(); i++) {
            char a = s[i];
            char b = t[i];

            if (mapST.count(a) && mapST[a] != b) return false;
            if (mapTS.count(b) && mapTS[b] != a) return false;

            mapST[a] = b;
            mapTS[b] = a;
        }
        return true;
    }
};

Time: O(n)
Space: O(1)