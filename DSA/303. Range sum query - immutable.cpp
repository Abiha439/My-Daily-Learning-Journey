                     // Prefix Sum

class NumArray {
private:
    vector<int> prefix;  

public:
    NumArray(vector<int>& nums) {
        prefix.resize(nums.size() + 1, 0);  
        for (int i = 0; i < nums.size(); i++) {
            prefix[i+1] = prefix[i] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return prefix[right+1] - prefix[left];
    }
};


𝐂𝐨𝐦𝐩𝐥𝐞𝐱𝐢𝐭𝐲
𝐂𝐨𝐧𝐬𝐭𝐫𝐮𝐜𝐭𝐨𝐫: O(n) – build prefix array in one pass.
𝐬𝐮𝐦𝐑𝐚𝐧𝐠𝐞: O(1) – just a subtraction.
𝐒𝐩𝐚𝐜𝐞: O(n) – for prefix array (trading space for speed).
