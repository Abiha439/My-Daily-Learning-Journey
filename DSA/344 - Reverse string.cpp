Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.

Example 1:
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

Example 2:
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
 
Constraints:

1 <= s.length <= 105
s[i] is a printable ascii character.



//        SOLUTION 

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int left = 0;
        int right = n-1;

        while (left < right) {
        swap(s[right], s[left]);
        left++;
        right--;
        }
    }
};


Complexity:
Time: O(n) 
Space: O(1) 


Approach

Use the Two Pointers technique.

Initialize two pointers:

left = 0 → first element
right = n - 1 → last element
While left < right:
Swap the elements at left and right.
Move left one step forward.
Move right one step backward.
Continue until the pointers meet or cross.

This reverses the string in-place, so no extra array is required.