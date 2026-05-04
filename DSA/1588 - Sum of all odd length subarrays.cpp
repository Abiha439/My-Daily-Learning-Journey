class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int left = i + 1;
            int right = n - i;
            int totalSubarrays = left * right;
            int oddCount = (totalSubarrays + 1) / 2;
            ans += arr[i] * oddCount;
        }
        return ans;
    }
};


Time Complexity: O(n)
Space Complexity: O(1)