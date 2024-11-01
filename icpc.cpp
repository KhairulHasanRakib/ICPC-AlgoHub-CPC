#include <bits/stdc++.h>      // Standard library
#include <iostream>           // Standard I/O
#include <conio.h>            // _getch
#include <algorithm>          // Algorithms
#include <array>              // Fixed-size arrays
#include <atomic>             // Atomic operations
#include <bitset>             // Bitset
#include <chrono>             // Time utilities
#include <cmath>              // Mathematical functions
#include <complex>            // Complex numbers
#include <condition_variable> // Condition variables
#include <cctype>             // Character classification
#include <cfloat>             // Limits of float types
#include <climits>            // Limits of integral types
#include <cstdarg>            // Variable argument lists
#include <cstdio>             // C-style I/O
#include <cstdlib>            // General utilities
#include <cstring>            // C-style string handling
#include <ctime>              // Time utilities
#include <deque>              // Double-ended queue
#include <exception>          // Exception handling
#include <forward_list>       // Singly linked list
#include <fstream>            // File stream
#include <functional>         // Function objects
#include <future>             // Asynchronous operations
#include <iomanip>            // Input/output manipulators
#include <iostream>           // Standard I/O stream
#include <iterator>           // Iterators
#include <list>               // Doubly linked list
#include <map>                // Associative array (map)
#include <memory>             // Smart pointers
#include <mutex>              // Mutual exclusion
#include <new>                // Low-level memory management
#include <numeric>            // Numeric operations
#include <ostream>            // Output stream
#include <queue>              // Queue
#include <random>             // Random number generation
#include <regex>              // Regular expressions
#include <set>                // Set
#include <sstream>            // String stream
#include <stack>              // Stack
#include <string>             // String handling
#include <thread>             // Thread support
#include <tuple>              // Tuple
#include <type_traits>        // Type traits
#include <typeinfo>           // Type information
#include <unordered_map>      // Unordered associative array (hash map)
#include <unordered_set>      // Unordered set
#include <utility>            // Utility functions
#include <valarray>           // Array class
#include <vector>             // Dynamic array
#include <GL/gl.h>            // OpenGL for graphics
#include <GL/glu.h>           // OpenGL Utility Library
#include <GL/gl.h>            // OpenGL
#include <GL/glu.h>           // OpenGL Utility Library

// Function prototype
int multiplyNumbers(int x, int y);

int main()
{
    int num1 = 3, num2 = 7;
    int result = multiplyNumbers(num1, num2); // Calling the function
    std::cout << "The product is: " << result << std::endl;
    return 0;
}

// Function definition
int multiplyNumbers(int x, int y)
{
    int product = x * y;
    return product;
}