/*
Imagine you have a magical garden where flowers bloom in a specific pattern.
In the first day, a single flower blooms. 
On the second day, two flowers bloom, and 
On the third day, three flowers bloom. 
This pattern continues. Write a program to calculate the minimum number of days needed for the garden to reach a total of at least 100 flowers.
*/

#include <iostream>

int main() {
    int flowers = 0; // Number of flowers in the garden
    int days = 0; // Number of days passed

    while (flowers < 100) { // Loop until the number of flowers reaches 100
        days++; // Increment the day count
        flowers += days; // Add the number of flowers that bloom on that day
        std::cout << "Day " << days << ": " << days << " flower(s) bloom (Total: " << flowers << ")\n";
    }

    std::cout << "It took " << days << " days to reach 100 flowers." << std::endl; // Print the number of days
    return 0; 
}
