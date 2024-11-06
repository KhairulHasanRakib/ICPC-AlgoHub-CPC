#include <bits/stdc++.h>
using namespace std;
double f(double x) {
    return 3 * x - cos(x) - 1;
}

double bisection(double a, double b, double tol) {
    if (f(a) * f(b) >= 0) {
        cout << "fails";
        return NAN;
    }

    double c;
    while ((b - a) >= tol) {
        c = (a + b) / 2;
        if (f(c) == 0.0)
            break;
        else if (f(c) * f(a) < 0)
            b = c;
        else
            a = c;
    }
    return c;
}

int main() {
    double a = 0;
    double b = 1;
    double tol = 0.0000001;

    double root = bisection(a, b, tol);
    if (root) {
        cout << "Root found: " << root << endl;
    }

    return 0;
}
