#include <iostream>
#include <limits>

int main() {
    int terms;

    std::cout << "=== Fibonacci Series Generator ===\n";
    std::cout << "Enter the number of terms: ";
    std::cin >> terms;

    if (std::cin.fail() || terms <= 0) {
        std::cout << "Invalid input. Please enter a positive whole number.\n";
        return 1;
    }

    unsigned long long first = 0;
    unsigned long long second = 1;

    std::cout << "\nFibonacci series:\n";

    for (int i = 1; i <= terms; i++) {
        std::cout << first;

        if (i < terms) {
            std::cout << ", ";
        }

        unsigned long long next = first + second;
        first = second;
        second = next;
    }

    std::cout << '\n';

    return 0;
}
