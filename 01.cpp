#include <iostream>
using namespace std;

int globalVar = 10;

void myFunction() {
    cout << globalVar << endl;  // Accessing the global variable
}

int main() {
    cout << globalVar << endl;  // Accessible here
    myFunction();  // Accessible here
    
}