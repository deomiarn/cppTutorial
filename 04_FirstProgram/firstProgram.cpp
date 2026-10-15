#include <iostream>

// learncpp.com Chapter 1.11 — Developing your first program
int main() {
    std::cout << "Enter an integer: ";

    int numUser {};
    std::cin >> numUser;

    // Print double the value of numUser
    std::cout << "Double that number is: " << numUser * 2 << '\n';
    // Print tripple the value of numUser
    std::cout << "Triple that number is: " << numUser * 3 << '\n';

    return 0;
}
