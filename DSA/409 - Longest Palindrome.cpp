                        // Hash map

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;
      
        for (char c : s) {
            freq[c]++;
        }
        
        int length = 0;
        bool oddFound = false;
        
        for (auto& p : freq) {
            if (p.second % 2 == 0) {
                length += p.second;          
            } else {
                length += p.second - 1;      
                oddFound = true;             
            }
        }
        
        if (oddFound) length++;
        
        return length;
    }
};



⏱ Complexity
Time: O(n) – one pass for counting, one pass over map.
Space: O(1) – at most 52 entries (upper/lowercase letters).