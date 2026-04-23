          // Practice Questions of if, else, nested if, switch statement, ternary operators

                            //  1. if-else (Basic)

// Example 1:
// Write a program that takes a number as input and prints "Positive" if it's greater than zero,
//  "Negative" if less than zero, and "Zero" if it's zero.

  let num = -10;
    if (num > 0) {
    console.log("Positive");
  } else if (num < 0) {
    console.log("Negative");
  } else {
    console.log("Zero");
  }


// Example 2:

// if (marks >= 40) print("Pass");
// else print("Fail");

let marks = 39;

if (marks >= 40) {
    console.log("Pass");
} else {
    console.log("Fail");
}

 
                            //    2. Nested if
// Example 3:
// Take three numbers a, b, c. Find the largest number using nested if (without logical operators like &&).

let a = 1000;
let b = 25;
let c = 15;

let largest;

if (a > b) {
    if (a > c) {
        largest = a;
    } else {
        largest = c;
    }
} else {
    if (b > c) {
        largest = b;
    } else {
        largest = c;
    }
}

console.log("The largest number is: "+ largest);

