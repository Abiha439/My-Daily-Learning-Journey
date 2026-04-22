                           // Brute Force
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       vector<int> ans; 
       for (int i = 0; i < n; i++) {
        ans.push_back(nums[i]);
        ans.push_back(nums[i + n]);
       }
       return ans;
    }
};

Time Complexity: 0(n)
Space Complexity: 0(n)
     

                                  // Optimized way
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int multiplier = 1001;  
        
        for (int i = 0; i < n; i++) {
            int y = nums[i + n];
            nums[i] = nums[i] + (y * multiplier);
        }
        
        for (int i = n - 1; i >= 0; i--) {
            int y = nums[i] / multiplier;
            int x = nums[i] % multiplier;
            nums[2 * i] = x;
            nums[2 * i + 1] = y;
        }
        
        return nums;
    }
};


Time Complexity: 0(n)
Space Complexity: 0(1)