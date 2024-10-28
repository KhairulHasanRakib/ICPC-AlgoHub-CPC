# ICPC-AlgoHub-CPC

All Type of programming contest push in this repository.

### **Reference**

```
https://roadmap.sh/cpp
https://en.cppreference.com/w/
https://www.learncpp.com/
https://www.w3schools.com/cpp
```

## Including Libraries

```
#include <algorithm>        // Algorithms
#include <array>           // Fixed-size arrays
#include <atomic>          // Atomic operations
#include <bitset>          // Bitset
#include <chrono>          // Time utilities
#include <cmath>           // Mathematical functions
#include <complex>         // Complex numbers
#include <condition_variable> // Condition variables
#include <cctype>          // Character classification
#include <cfloat>          // Limits of float types
#include <climits>         // Limits of integral types
#include <cstdarg>         // Variable argument lists
#include <cstdio>          // C-style I/O
#include <cstdlib>        // General utilities
#include <cstring>        // C-style string handling
#include <ctime>           // Time utilities
#include <deque>           // Double-ended queue
#include <exception>       // Exception handling
#include <filesystem>      // File system operations
#include <forward_list>    // Singly linked list
#include <fstream>         // File stream
#include <functional>      // Function objects
#include <future>          // Asynchronous operations
#include <iomanip>         // Input/output manipulators
#include <iostream>        // Standard I/O stream
#include <iterator>        // Iterators
#include <list>            // Doubly linked list
#include <map>             // Associative array (map)
#include <memory>          // Smart pointers
#include <mutex>           // Mutual exclusion
#include <new>             // Low-level memory management
#include <numeric>         // Numeric operations
#include <optional>        // Optional values
#include <ostream>         // Output stream
#include <queue>           // Queue
#include <random>          // Random number generation
#include <regex>           // Regular expressions
#include <set>             // Set
#include <sstream>         // String stream
#include <stack>           // Stack
#include <string>          // String handling
#include <string_view>     // Non-owning string views
#include <thread>          // Thread support
#include <tuple>           // Tuple
#include <type_traits>     // Type traits
#include <typeinfo>        // Type information
#include <unordered_map>   // Unordered associative array (hash map)
#include <unordered_set>   // Unordered set
#include <utility>         // Utility functions
#include <valarray>        // Array class
#include <variant>         // Variant type
#include <vector>          // Dynamic array


#include <boost/algorithm/string.hpp> // Boost String Algorithms
#include <boost/filesystem.hpp>       // Boost Filesystem
#include <boost/regex.hpp>            // Boost Regex
#include <boost/thread.hpp>           // Boost Thread
#include <boost/asio.hpp>             // Boost Asynchronous I/O
#include <Eigen/Dense>                // Eigen for linear algebra
#include <fmt/core.h>                 // {fmt} for formatting
#include <gtest/gtest.h>              // Google Test for unit testing
#include <json.hpp>                   // nlohmann/json for JSON handling
#include <opencv2/opencv.hpp>         // OpenCV for computer vision
#include <SDL2/SDL.h>                 // SDL for multimedia
#include <SFML/Graphics.hpp>          // SFML for graphics
#include <curl/curl.h>                // libcurl for HTTP requests
#include <QtCore>                     // Qt Core module
#include <QtGui>                      // Qt GUI module
#include <QtWidgets>                  // Qt Widgets module
#include <Poco/Net/HTTPClientSession.h> // Poco for networking
#include <spdlog/spdlog.h>            // spdlog for logging
#include <assimp/Importer.hpp>        // Assimp for 3D model loading
#include <GL/gl.h>                    // OpenGL for graphics
#include <GL/glu.h>                   // OpenGL Utility Library



#include <SDL2/SDL.h>                     // Simple DirectMedia Layer
#include <SFML/Graphics.hpp>              // Simple and Fast Multimedia Library
#include <GL/gl.h>                        // OpenGL
#include <GL/glu.h>                       // OpenGL Utility Library
#include <boost/beast.hpp>                // Boost.Beast for HTTP/WebSocket
#include <boost/asio.hpp>                 // Boost.Asio for networking
#include <boost/regex.hpp>                // Boost.Regex for regular expressions
#include <boost/filesystem.hpp>           // Boost.Filesystem for file system operations
#include <boost/thread.hpp>               // Boost.Thread for multithreading
#include <Eigen/Dense>                    // Eigen for linear algebra
#include <fmt/core.h>                     // {fmt} for formatting
#include <gtest/gtest.h>                  // Google Test for unit testing
#include <json.hpp>                       // nlohmann/json for JSON handling
#include <opencv2/opencv.hpp>             // OpenCV for computer vision
#include <curl/curl.h>                    // libcurl for HTTP requests
#include <QtCore>                         // Qt Core module
#include <QtGui>                          // Qt GUI module
#include <QtWidgets>                      // Qt Widgets module
#include <Poco/Net/HTTPClientSession.h>   // Poco for networking
#include <spdlog/spdlog.h>                // spdlog for logging
#include <assimp/Importer.hpp>            // Assimp for 3D model loading
#include <dlib/dlib.h>                    // Dlib for machine learning
#include <tensorflow/core/public/session.h> // TensorFlow C++ API
#include <sqlite3.h>                      // SQLite C API
#include <mysql/mysql.h>                  // MySQL C API
#include <armadillo>                      // Armadillo for linear algebra
#include <gsl/gsl_math.h>                 // GNU Scientific Library
#include <portaudio.h>                    // PortAudio for audio I/O
#include <openssl/ssl.h>                  // OpenSSL for secure communications
#include <cryptlib.h>                     // Crypto++ for cryptography
#include <catch2/catch.hpp>               // Catch2 for unit testing
#include <protobuf/message.h>             // Protocol Buffers for serialization
#include <cereal/archives/json.hpp>       // Cereal for JSON serialization
#include <wx/wx.h>                        // wxWidgets for GUI
#include <FL/Fl.H>                        // FLTK for GUI

```

### Standard Library Functions

```
<iostream>
std::cout - Output stream
std::cin - Input stream
std::cerr - Error output stream
std::getline() - Read a line from input

<vector>
std::vector::push_back() - Add an element to the end
std::vector::pop_back() - Remove the last element
std::vector::size() - Get the number of elements
std::vector::at() - Access an element with bounds checking

<algorithm>
std::sort() - Sort elements
std::find() - Find an element
std::for_each() - Apply a function to each element
std::accumulate() - Accumulate values

<string>
std::string::length() - Get the length of the string
std::string::substr() - Get a substring
std::string::find() - Find a substring
std::string::append() - Append to a string

<map>
std::map::insert() - Insert a key-value pair
std::map::find() - Find a key
std::map::erase() - Remove a key-value pair
std::map::size() - Get the number of elements

Popular Third-Party Library Functions

Boost
boost::filesystem::exists() - Check if a file exists
boost::regex::match() - Match a regex pattern
boost::thread::join() - Wait for a thread to finish

OpenCV
cv::imread() - Read an image from a file
cv::imshow() - Display an image in a window
cv::waitKey() - Wait for a key press
cv::resize() - Resize an image

TensorFlow
tensorflow::Session::Create() - Create a new session
tensorflow::Session::Run() - Run a computation
tensorflow::Tensor::Scalar() - Create a scalar tensor

SQLite
sqlite3_open() - Open a database connection
sqlite3_exec() - Execute a SQL statement
sqlite3_close() - Close a database connection

JSON (nlohmann/json)
json::parse() - Parse a JSON string
json::dump() - Serialize JSON to a string
json::operator[] - Access JSON elements
```

## Input/Output

```
Input and Output Methods

Input: std::cin
Output: std::cout

Additional Methods

Input: std::ifstream (for file input)
Output: std::ofstream (for file output)
Input: std::stringstream (for string input)
Output: std::stringstream (for string output)
Input: scanf (C-style input)
Output: printf (C-style output)
Input: std::cerr (for error output)
Output: std::clog (for logging output)
```

## Variables and Data Types

```
Variable Declaration: type variableName;
Basic Data Types

Integer:
int (e.g., int age;)
short (e.g., short s;)
long (e.g., long l;)
long long (e.g., long long ll;)

Floating Point:
float (e.g., float height;)
double (e.g., double weight;)
long double (e.g., long double preciseValue;)

Character:
char (e.g., char initial;)

Boolean:
bool (e.g., bool isActive;)

Derived Data Types

Array:
type arrayName[size]; (e.g., int numbers[10];)

Pointer:
type* pointerName; (e.g., int* ptr;)

Reference:
type& referenceName = variable; (e.g., int& ref = age;)

User-Defined Data Types

Structure:
struct StructName { /* members */ }; (e.g., struct Person { std::string name; int age; };)

Class:
class ClassName { /* members and methods */ }; (e.g., class Car { public: std::string model; };)

Union:
union UnionName { /* members */ }; (e.g., union Data { int intValue; float floatValue; };)

Enumeration:
enum EnumName { VALUE1, VALUE2 }; (e.g., enum Color { RED, GREEN, BLUE };)
```

## Control Structures

```
If Statement:
if (condition) { /* code */ }

If-Else Statement:
if (condition) { /* code */ } else { /* code */ }

Else If Ladder:
if (condition1) { /* code */ } 
else if (condition2) { /* code */ } 
else { /* code */ }

Switch Statement:
switch (expression) {
    case value1: /* code */ break;
    case value2: /* code */ break;
    default: /* code */ 
}

Looping Statements
For Loop:
for (initialization; condition; increment) { /* code */ }

While Loop:
while (condition) { /* code */ }

Do-While Loop:
do { /* code */ } while (condition);

Jump Statements

Break Statement:
break; // Exits the nearest loop or switch

Continue Statement:
continue; // Skips the current iteration of the loop

Return Statement:
return value; // Exits the function and optionally returns a value
```

## Functions

```
Function Declaration

Syntax:
returnType functionName(parameterType parameterName);
Function Definition

Syntax:
returnType functionName(parameterType parameterName) {
    // function body
}

Function Call
Syntax:
functionName(arguments);
Types of Functions

1. Standard Functions
Example:
int add(int a, int b) {
    return a + b;
}

2. Void Functions
Example:
void printMessage() {
    std::cout << "Hello, World!" << std::endl;
}

3. Inline Functions
Syntax:
inline returnType functionName(parameters) {
    // function body
}

4. Recursive Functions
Example:
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

5. Function Overloading
Example:
int add(int a, int b) { return a + b; }
double add(double a, double b) { return a + b; }

6. Default Arguments
Example:
void display(int a, int b = 10) {
    std::cout << a << ", " << b << std::endl;
}
```

Arithmetic Operations
Addition (+): Adds two numbers. (sum)
Subtraction (-): Subtracts one number from the other. (diff)
Multiplication (*): Multiplies two numbers. (product)
Division (/): Divides one number by another, yields quotient. (quotient)
Modulus (%): Divides one number by another, yields remainder. (remainder)

Relational Operators
Equal to (==): Returns true if both operands are equal.
Not equal to (!=): Returns true if operands are not equal.
Greater than (>): Returns true if the first operand is greater than the second.
Less than (<): Returns true if the first operand is less than the second.
Greater than or equal to (>=): Returns true if the first operand is greater than or equal to the second.
Less than or equal to (<=): Returns true if the first operand is less than or equal to the second.

Logical Operators
AND (&&): Returns true if both operands are true.
OR (||): Returns true if any one of the operands is true.
NOT (!): Returns true if the operand is false and vice versa.

Bitwise Operations
Bitwise AND (&)
Bitwise OR (|)
Bitwise XOR (^)
Bitwise NOT (~)
Bitwise Left Shift (<<)
Bitwise Right Shift (>>)



# Loops in C++

```
1. For Loop
Syntax:
for (initialization; condition; increment/decrement) {
    // Code
}

Example:
for (int i = 0; i < 5; i++) {
    cout << "Iteration: " << i << endl;
}

2. While Loop
Syntax:
while (condition) {
    // Code
}

Example:
int i = 0;
while (i < 5) {
    cout << "Iteration: " << i << endl;
    i++;
}

3. Do-While Loop
Syntax:
do {
    // Code
} while (condition);

Example:
int i = 0;
do {
    cout << "Iteration: " << i << endl;
    i++;
} while (i < 5);

4. Range-Based For Loop
Syntax:
for (declaration : container) {
    // Code
}

Example:
vector<int> numbers = {1, 2, 3, 4, 5};
for (int num : numbers) {
    cout << "Number: " << num << endl;
}

5. Nested Loops
Syntax:
for (initialization; condition; increment/decrement) {
    for (initialization; condition; increment/decrement) {
        // Code
    }
}

Example:
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << "i: " << i << ", j: " << j << endl;
    }
}

6. Infinite Loop
Syntax:
while (true) {
    // Code
}

Example:
while (true) {
    cout << "This will run forever!" << endl;
    // Use break to exit the loop if needed
}

7. Break Statement
Syntax:
break; // Exits the loop

Example:
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        break; // Exit the loop when i is 5
    }
    cout << "i: " << i << endl;
}

8. Continue Statement
Syntax:
continue; // Skips the current iteration

Example:
for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
        continue; // Skip even numbers
    }
    cout << "i: " << i << endl;
}

9. Labeled Loop
Syntax:
label: loop_type {
    // Code
}

Example:
outer_loop: for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        if (j == 1) {
            break outer_loop; // Breaks out of the outer loop
        }
        cout << "i: " << i << ", j: " << j << endl;
    }
}
```


# Logical Operators in C++

```
1. Logical AND (&&)
Syntax:
result = expression1 && expression2;

Example:
bool a = true;
bool b = false;
bool result = a && b; // result is false

2. Logical OR (||)
Syntax:
result = expression1 || expression2;

Example:
bool a = true;
bool b = false;
bool result = a || b; // result is true

3. Logical NOT (!)
Syntax:
result = !expression;

Example:
bool a = true;
bool result = !a; // result is false

4. Bitwise AND (&)
Syntax:
result = a & b;

Example:
int a = 5;  // (binary: 0101)
int b = 3;  // (binary: 0011)
int result = a & b; // result is 1 (binary: 0001)

5. Bitwise OR (|)
Syntax:
result = a | b;

Example:
int a = 5;  // (binary: 0101)
int b = 3;  // (binary: 0011)
int result = a | b; // result is 7 (binary: 0111)

6. Bitwise NOT (~)
Syntax:
result = ~a;

Example:
int a = 5;  // (binary: 0101)
int result = ~a; // result is -6 (binary: 1010 in two's complement)

7. Conditional (Ternary) Operator
Syntax:
result = condition ? expression1 : expression2;

Example:
int a = 5;
int b = 10;
int max = (a > b) ? a : b; // max will be 10

8. Comparison Operators
Equal to (==)
Not equal to (!=)
Greater than (>)
Less than (<)
Greater than or equal to (>=)
Less than or equal to (<=)

Example:
int a = 5;
int b = 10;
if (a < b) {
    // This condition can be combined with logical operators
}

9. Logical XOR (Exclusive OR)
Implementation:
result = (a || b) && !(a && b);

Example:
bool a = true;
bool b = false;
bool result = (a || b) && !(a && b); // result is true

10. Using std::logical_and, std::logical_or, and std::logical_not
Example:
#include <iostream>
#include <functional>

using namespace std;

int main() {
    bool a = true;
    bool b = false;

    logical_and<bool> and_op;
    logical_or<bool> or_op;
    logical_not<bool> not_op;

    cout << "AND: " << and_op(a, b) << endl; // Outputs 0 (false)
    cout << "OR: " << or_op(a, b) << endl;   // Outputs 1 (true)
    cout << "NOT a: " << not_op(a) << endl;  // Outputs 0 (false)

    return 0;
}

11. Short-Circuiting in Function Calls
Example:
int safe_divide(int a, int b) {
    return (b != 0) && (a / b); // Only evaluates a / b if b is not zero
}

12. Logical Operations in Templates
Example:

template<bool condition>
struct Conditional {
    static const char* value = "False";
};

template<>
struct Conditional<true> {
    static const char* value = "True";
};

// Usage
std::cout << Conditional<(5 > 3)>::value; // Outputs "True"
```




```
1. Basic Arithmetic Operators
Addition (+)
Syntax: result = a + b;

Example:
int a = 5;
int b = 3;
int result = a + b; // result is 8

Subtraction (-)
Syntax: result = a - b;

Example:
int a = 5;
int b = 3;
int result = a - b; // result is 2

Multiplication (*)
Syntax: result = a * b;

Example:
int a = 5;
int b = 3;
int result = a * b; // result is 15

Division (/)
Syntax: result = a / b;

Example:
int a = 6;
int b = 3;
int result = a / b; // result is 2

Modulus (%)
Syntax: result = a % b;

Example:
int a = 5;
int b = 3;
int result = a % b; // result is 2 (remainder of 5 divided by 3)

2. Compound Assignment Operators
Addition Assignment (+=)
Syntax: a += b;

Example:
int a = 5;
a += 3; // a is now 8

Subtraction Assignment (-=)
Syntax: a -= b;

Example:
int a = 5;
a -= 3; // a is now 2

Multiplication Assignment (*=)
Syntax: a *= b;

Example:
int a = 5;
a *= 3; // a is now 15

Division Assignment (/=)
Syntax: a /= b;

Example:
int a = 6;
a /= 3; // a is now 2

Modulus Assignment (%=)
Syntax: a %= b;

Example:
int a = 5;
a %= 3; // a is now 2

3. Unary Operators
Unary Plus (+)
Syntax: +a;

Example:
int a = 5;
int result = +a; // result is 5

Unary Minus (-)
Syntax: -a;

Example:
int a = 5;
int result = -a; // result is -5

4. Floating-Point Division
Example:
double a = 5;
double b = 2;
double result = a / b; // result is 2.5

5. Type Casting
Example:
int a = 5;
double b = 2.0;
double result = a / b; // result is 2.5

6. Integer Division
Example:
int a = 5;
int b = 2;
int result = a / b; // result is 2 (not 2.5)

7. Overflow and Underflow
Example:
int a = INT_MAX; // Maximum value for int
int result = a + 1; // Overflow occurs

8. Using std::abs for Absolute Values
Example:
#include <cmath>
int a = -5;
int result = std::abs(a); // result is 5

9. Using std::pow for Exponentiation
Example:
#include <cmath>
double result

9. Using std::pow for Exponentiation
Example:
#include <cmath>
double result = std::pow(2, 3); // result is 8 (2 raised to the power of 3)

10. Using std::sqrt for Square Roots
Example:
#include <cmath>
double result = std::sqrt(16); // result is 4

11. Using std::fmod for Floating-Point Modulus
Example:
#include <cmath>
double result = std::fmod(5.5, 2.0); // result is 1.5

12. Combinations of Operators

+-: Subtracting a value from another.
int a = 5;
int b = 3;
int result = a + -b; // result is 2 (5 + (-3))

-+: Adding a value to a negative.
int a = 5;
int b = 3;
int result = a - +b; // result is 2 (5 - 3)

+*: Multiplying a value and then adding.
int a = 5;
int b = 3;
int result = a + (b * 2); // result is 11 (5 + (3 * 2))

-*: Subtracting a product.
int a = 5;
int b = 3;
int result = a - (b * 2); // result is -1 (5 - (3 * 2))

*+: Multiplying and then adding.
int a = 5;
int b = 3;
int result = (a * 2) + b; // result is 13 ((5 * 2) + 3)

*-: Multiplying and then subtracting.
int a = 5;
int b = 3;
int result = (a * 2) - b; // result is 7 ((5 * 2) - 3)

Summary of Arithmetic Operators and Concepts

Basic Arithmetic Operators: +, -, *, /, %
Compound Assignment Operators: +=, -=, *=, /=, %=
Unary Operators: Unary Plus (+), Unary Minus (-)
Floating-Point Division
Type Casting
Integer Division
Overflow and Underflow
Using std::abs for Absolute Values
Using std::pow for Exponentiation
Using std::sqrt for Square Roots
Using std::fmod for Floating-Point Modulus
Combinations of Operators: +-, -+, +*, -*, *+, *-
```
