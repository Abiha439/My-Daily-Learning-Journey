412. Fizz Buzz
Given an integer n, return a string array answer (1-indexed) where:

answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true.
 

Example 1:

Input: n = 3
Output: ["1","2","Fizz"]


//  solution

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;

        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                answer.push_back("FizzBuzz");
            } 
            else if (i % 3 == 0) {
                answer.push_back("Fizz");
            } 
            else if (i % 5 == 0) {
                answer.push_back("Buzz");
            } 
            else {
                answer.push_back(to_string(i));
            }
        }
        return answer;
    }
};

Time Complexity: O(n) 
Space Complexity: O(n)

// approach

Create an empty vector<string> named answer to store the results.
Use a for loop from 1 to n.
For each number i, check the following conditions in order:
If divisible by both 3 and 5, add "FizzBuzz".
Else if divisible by 3, add "Fizz".
Else if divisible by 5, add "Buzz".
Otherwise, convert the number to a string using to_string(i) and add it to answer.
Return answer after the loop finishes.