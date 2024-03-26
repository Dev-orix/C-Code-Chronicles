#include <iostream>

void printPattern() {
    int n = 10; // Adjust n to change the number of rows
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            std::cout << '*';
        }
        for (int j = 0; j < 2 * i; j++) {
            std::cout << ' ';
        }
        for (int j = 0; j < n - i; j++) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << '*';
        }
        for (int j = 0; j < 2 * (n - 1 - i); j++) {
            std::cout << ' ';
        }
        for (int j = 0; j <= i; j++) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
}

int main() {
    // Call the printPattern function four times for the vertical order
    for (int i = 0; i < 4; i++) {
        printPattern();
        // Add a newline to separate patterns
        std::cout << std::endl;
    }

    return 0;
}
