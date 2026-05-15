                              // Prefix Sum

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        
        int left = 1;
        for (int i = 0; i < n; i++) {
            ans[i] = left;
            left *= nums[i];
        }
        
        int right = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= right;
            right *= nums[i];
        }
        
        return ans;
    }
};


⏱ 𝐂𝐨𝐦𝐩𝐥𝐞𝐱𝐢𝐭𝐲
𝐓𝐢𝐦𝐞: O(n) – two passes
𝐒𝐩𝐚𝐜𝐞: O(1) extra (output array doesn't count)