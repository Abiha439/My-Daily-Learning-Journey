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
Har i ke liye loop j = 0 se i tak chalta hai. Total iterations = 1 + 2 + 3 + ... + n = n(n+1)/2 ≈ n²/2
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