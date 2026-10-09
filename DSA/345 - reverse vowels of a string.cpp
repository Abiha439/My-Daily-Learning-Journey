345. Reverse Vowels of a String

Given a string s, reverse only all the vowels in the string and return it.
The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

Example 1:

Input: s = "IceCreAm"
Output: "AceCreIm"

Explanation:
The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".


// SOLUTION

class Solution {
public:
    string reverseVowels(string s) {
        int left = 0;
        int right = s.size() - 1;
        string vowels = "aeiouAEIOU";

        while (left < right) {

            while (left < right && vowels.find(s[left]) == string::npos) {
                left++;
            }
            while (left < right && vowels.find(s[right]) == string::npos) {
                right--;
            }
            swap(s[left], s[right]);

            left++;
            right--;
        }
        return s;
    }
};

Time Complexity: O(n)
Space Complexity: O(1) 


// Approach: Two Pointers

Initialize two pointers: left at the beginning and right at the end of the string.
Store all lowercase and uppercase vowels in a string: "aeiouAEIOU".
Move left forward while its character is not a vowel.
Move right backward while its character is not a vowel.
When both pointers point to vowels, swap those characters.
Move left forward and right backward after swapping.
Repeat until left is no longer less than right.
Return the modified string.