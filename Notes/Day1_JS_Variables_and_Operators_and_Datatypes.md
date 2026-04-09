Day 1: JS variables (var, let, const) and operators (arithmetic, logical, comparison).

                  Variables
Var: Variables can be re-declared and updated. 
Let: variable cannot be re-declared but can be updated.
Const: variable cannot be re-declared or updated. 


            // Variable Rules
1) Variable names are case sensitive. "a" and "A" is different.
2) We don't create two variables with same name.
3) Only letters, digits, underscore(_) and $ is allowed. (Not even space).
4) Only a letter, underscore or $ should be 1st character.
5) Reserved words cannot be variale names.

let fruits = ["apple", "mango", "pear"];
console.log(fruits);

// 5. Use typeof on all
console.log(typeof name);
console.log(typeof age);
console.log(typeof isTrue);
console.log(typeof isFalse);
console.log(typeof fruits);    // returns object


Problem: typeof fruits returns "object" (not "array")
JavaScript mein arrays actually objects hote hain, isliye typeof se pata nahi chalta ke yeh array hai ya koi aur object (jaise null, {}, etc.).

Solution: Array.isArray() method use karo – yeh true return karega agar variable array hai, warna false

console.log(Array.isArray(fruits));     // returns true


          // Data Types in JS
          Data types tell what kind of data we are storing.
Number, String, Boolean, undefined, Null, BigInt, Symbol. (These are primitive (immutable (not changed)) data types).
Non-Primitive Data Types (Objects, Array, Functions).
Objects (Collection of key value pair)

  key : value
  obj.key
  obj["key"]
  

                 // Operators in JS
Used to perform some operation on data.

                        Arithmetic operators: +, -, *, /
Modulus %
Exponentiation 2 power 2
Increment ++
Decrement --

a++ mean a = a+1
a-- mean a = a-1

a++, ++a both are valid.
a++ post increment
++a pre increment

                      // Assignment operator
              =, +=, -=, *=, %=, **=
        a += 1    => a = a + 1

                         // Comparison operators
Equal to ==
Equal to & type ===
Not equal to !=
Not equal to & type !==
       >, >=, <, <=
          
                   // Logical operators (true, false)
Logical AND             &&
Logical OR              ||
Logical NOT             !






