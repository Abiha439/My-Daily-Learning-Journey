796. Rotate String

Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.
A shift on s consists of moving the leftmost character of s to the rightmost position.
For example, if s = "abcde", then it will be "bcdea" after one shift.

Example 1:

Input: s = "abcde", goal = "cdeab"
Output: true

Explanation:
Rotating s to the left by 2 positions moves "ab" to the end, resulting in "cdeab", which is equal to goal.

// SOLUTION

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) {
            return false;
        }
        string doubled = s + s;
        return doubled.find(goal) != string::npos;
    }
};

// Approach 

If s and goal have different lengths, return false, since a rotation never changes the length.
Concatenate s with itself: doubled = s + s. Every rotation of s appears as a substring of doubled. For example,
if s = "abcde", then doubled = "abcdeabcde" contains "bcdea", "cdeab", "deabc" and "eabcd".
Search for goal inside doubled. If it is found, goal is a rotation of s, so return true. Otherwise return false.

Complexity: 
Time O(n)  
Space O(n) 




