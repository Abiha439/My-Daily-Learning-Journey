                        // Hashing 

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> st;
        for (int num : nums) {
            if (st.find(num) != st.end()) {
                st.erase(num);
            } else {
                st.insert(num);
            }
        }
        return *st.begin();
    }
};

Time Complexity: O(n)
Space Complexity: O(n)


                          // Bit Manipulation (Optimized solution)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int num : nums) ans ^= num;
        return ans;
    }
};


Time Complexity: O(n)
Space Complexity: O(1)