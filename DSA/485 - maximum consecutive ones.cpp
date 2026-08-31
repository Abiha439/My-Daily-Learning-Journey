485. Max Consecutive Ones
Given a binary array nums, return the maximum number of consecutive 1's in the array.

Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.


                    // CODE  (optimized approach)

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int oneCount = 0;
      int maxCount = 0;

      for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            oneCount++;
            maxCount = max(maxCount, oneCount);
        }
        else {
            oneCount = 0;
        }
      }
      return maxCount;
    }
};


Time Complexity: O(n)

We traverse the array once.

If the array contains n elements, the loop runs n times.

Space Complexity: O(1)

We only use two variables:

oneCount
maxCount

No extra array or data structure is created.

Therefore, the extra space is O(1).


                     // brute force approach

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int maxCount = 0;
        for (int i = 0; i < nums.size(); i++) {
            int Count = 0;
            for (int j = i; j < nums.size(); j++) {
               if (nums[j] == 1) {
                  Count++;
                  maxCount = max(maxCount, Count);
               } else {
                break;
               }
            }
        }
        return maxCount;
    }
};

Time Complexity: O(n²) worst case
Space Complexity: O(1)










