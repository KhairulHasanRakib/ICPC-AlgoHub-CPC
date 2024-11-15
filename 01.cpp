#include <iostream>
using namespace std;

int globalVar = 10;  // Global variable
void myFunction() {
    int localVar = 20;  // Local variable
    cout << localVar << endl;  // Accessible here
}

int main() {
    myFunction();
    cout << globalVar << endl;  // Error: 'localVar' was not declared in this scope
    
}