              // Brute force
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
        }
        return count;
    }
};

Time Complexity: 0(n2)
Space Complexity: 0(1)



                    // Optimized way - Hash map

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        
        int goodPairs = 0;
        for (auto& p : freq) {
            int f = p.second;
            goodPairs += f * (f - 1) / 2;
        }
        return goodPairs;
    }
};

Time Complexity: 0(n)
Space Complexity: 0(n)