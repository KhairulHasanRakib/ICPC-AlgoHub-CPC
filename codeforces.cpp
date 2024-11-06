#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <math.h>

double f(double x) {
    return 3 * x - cos(x) - 1; // Define the function
}

double bisection(double a, double b, double tol) {
    if (f(a) * f(b) >= 0) {
        std::cerr << "Bisection method fails: f(a) and f(b) must have different signs." << std::endl;
        return NAN; // Return NaN if the initial interval is invalid
    }

    double c; // Variable to store the midpoint
    int step = 0; // Step counter
    std::cout << "Step\t a\t\t b\t\t c\t\t f(c)\n";
    std::cout << "---------------------------------------------\n";

    while ((b - a) >= tol) { // Loop until the interval is smaller than the tolerance
        c = (a + b) / 2; // Midpoint
        std::cout << step++ << "\t " << a << "\t " << b << "\t " << c << "\t " << f(c) << "\n"; // Print the current step

        if (f(c) == 0.0) // Check if midpoint is the root
            break;
        else if (f(c) * f(a) < 0) // If root is in the left half
            b = c;
        else // If root is in the right half
            a = c;
    }
    return c; // Return the root
}

int main() {
    double a = 0; // Start of the interval
    double b = 1; // End of the interval
    double tol = 0.0001; // Tolerance level

    double root = bisection(a, b, tol);
    if (!isnan(root)) {
        std::cout << "Root found: " << root << std::endl;
    }

    return 0;
}
