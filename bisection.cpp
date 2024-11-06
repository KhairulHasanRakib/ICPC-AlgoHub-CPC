#include <bits/stdc++.h>
using namespace std;

int main(){
    double a;
    double b;
    double c;
    double fa;
    double fb;
    double fc;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "f(a) : ";
    fa = 3 * a - cos(a) - 1;
    cout << fa << endl;
    cout << "f(b) : ";
    fb = 3 * b - cos(b) - 1;
    cout << fb << endl;
    cout << "c = (a+b)/2 : ";
    c = (a + b) / 2;
    cout << c << endl;
    cout << "f(c): ";
    fc = 3 * c - cos(c) - 1;
    cout << fc << endl;
    if(fa*fb < 0){ 
        b = c;
    }
    else if(fc*fb < 0){
        a = c;
    }
    else{
        cout << "Root is " << c << endl;
    }
    return 0;

}