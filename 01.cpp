#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Function: f(x) = 3x - cos(x) - 1" << endl;
    cout << "Enter X: ";
    double x;
    cin >> x;
    cout << "f(" << x << ") = 3 * " << x << " - cos(" << x << ") - 1 = " << 3 * x - cos(x) - 1 << " is your root" << endl;
    cout << "Your X is: " << x << endl;

    return 0;
}