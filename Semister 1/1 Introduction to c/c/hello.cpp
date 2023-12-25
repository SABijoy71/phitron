#include <iostream>

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number < 1) {
        std::cout << "Please enter a positive number." << std::endl;
        return 1;
    }

    for (int i = 1; i <= number; i++) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    return 0;
}
