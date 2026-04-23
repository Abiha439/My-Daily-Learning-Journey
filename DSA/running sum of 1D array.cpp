                //  Brute force 
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = 0; j <= i; j++) {
                sum += nums[j];
            }
            result[i] = sum;
        }
        return result;
    }
}; 

Time Complexity: O(n²)
Space Complexity: 0(n)



                //  Optimized way 
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i-1];
        }
        return nums;
    }
};

Time Complexity: 0(n)
Space Complexity: 0(1)