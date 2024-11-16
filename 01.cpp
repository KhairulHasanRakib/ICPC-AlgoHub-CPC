#include <iostream>
#include <string>  // For using string functions
#include <algorithm>  // For using transform function
using namespace std;

// Function to print the greeting
void printGreeting(const string& name) {

    // Convert the greeting to uppercase
    string upperGreeting = "Hello, " + name + "!";
    string lowerGreeting = "Hello, " + name + "!";

    // converts the string to lowercase
    transform(lowerGreeting.begin(), lowerGreeting.end(), lowerGreeting.begin(), ::tolower);
    transform(upperGreeting.begin(), upperGreeting.end(), upperGreeting.begin(), ::toupper);

    // Print the final result
    cout << "Final Result: " << lowerGreeting << endl;
    cout << "Final Result: " << upperGreeting << endl;
}

int main() {
    // The name to be used in the greeting
    string name = "Alice";
    
    printGreeting(name);


    
}