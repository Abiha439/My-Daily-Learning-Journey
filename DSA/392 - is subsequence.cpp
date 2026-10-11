392. Is Subsequence

Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
A subsequence of a string is a new string that is formed from the original string by deleting some (can be none)
of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).


Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true

//   Solution

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;

        for (int j = 0; j < t.size(); j++) {
            if (i < s.size() && s[i] == t[j]) {
                i++;
            }
        }
        return i == s.size();
    }
};

Complexity
Time: O(n)
Space: O(1)


//  Approach: Two Pointers
Keep two pointers: i on s (the next character to find) and j on t.
Move j through t from left to right.
If t[j] == s[i], increment i (look for the next character of s).
At the end, if i == s.size(), every character of s was matched in order, so return true. Otherwise return false.