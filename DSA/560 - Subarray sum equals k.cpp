                     //   Prefix sum + Hashmap (Pattern)

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;  
        mp[0] = 1;                   
        int prefix = 0, count = 0;
        
        for (int num : nums) {
            prefix += num;
            int target = prefix - k;
            if (mp.find(target) != mp.end()) {
                count += mp[target];
            }
            mp[prefix]++;
        }
        return count;
    }
};


Time Complexity: O(n)
Space Complexity: O(n)