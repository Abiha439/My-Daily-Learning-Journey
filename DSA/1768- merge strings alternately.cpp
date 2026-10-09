1768. Merge Strings Alternately

You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. 
If a string is longer than the other, append the additional letters onto the end of the merged string.
Return the merged string.

Example 1:

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r

// SOLUTION

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";

        int i = 0;
        int j = 0;

        while (i < word1.size() || j < word2.size()) {
            if (i < word1.size()) {
                ans += word1[i];
                i++;
            }
        if (j < word2.size()) {
             ans += word2[j];
            j++;
            }
        }
        return ans;
    }
};

Complexity
Time: O(n + m)
Space: O(n + m)


//  Approach — Two Pointers

* Initialize two pointers: `i = 0` for `word1` and `j = 0` for `word2`.
* Create an empty string `result` to store the merged string.
* Use a `while` loop that continues while either string has remaining characters.
* If `word1` has characters left, append `word1[i]` to `result` and increment `i`.
* If `word2` has characters left, append `word2[j]` to `result` and increment `j`.
* Continue until both strings are fully traversed, then return `result`.

