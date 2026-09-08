You're given strings jewels representing the types of stones that are jewels, and stones representing
 the stones you have. Each character in stones is a type of stone you have. You want to know how many of the 
 stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:

Input: jewels = "aA", stones = "aAAbbbb"
Output: 3


// SOLUTION 1 - BRUTE FORCE
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for (int i =0; i < stones.size(); i++) {
            for (int j = 0; j < jewels.size(); j++) {
                if (stones[i] == jewels[j]) {
                    count++;
                }
            }
        }
        return count;
    }
};


TC: O(n + m)  
SC: O(1) 



// SOLUTION 2 --BRUTE FORCE

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for (int i = 0; i < stones.size(); i++) {
          if (jewels.find(stones[i]) != string::npos){
            count++;
          };
           
        }
        return count;
    }
};


TC: O(n + m)  
SC: O(1)


// SOLUTION 3 -- OPTIMIZED SOLUTION

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;

        unordered_set<char> jewelsSet;

        for (char ch : jewels) {
            jewelsSet.insert(ch);
        }

        for (char ch : stones) {
            if (jewelsSet.count(ch)) {
                count++;
            }
        }

        return count;
    }
};


TC = O(n + m) 
SC = O(m)
