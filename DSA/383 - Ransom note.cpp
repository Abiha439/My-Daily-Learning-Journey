                        // Hash Map Frequency Counting
                        

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> freq;
        for (char c : magazine) freq[c]++;
        for (char c : ransomNote) {
            if (--freq[c] < 0) return false;
        }
        return true;
    }
};


Time Complexity: O(m + n)
Space Complexity: O(1)

