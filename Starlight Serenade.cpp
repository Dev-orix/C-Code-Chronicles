//This C++ program orchestrates a visual symphony of stars, forming a mesmerizing pattern reminiscent of celestial harmony. By dynamically arranging asterisks in a pattern that resembles a symphony of stars, it captivates the viewer with its aesthetic allure. The code utilizes nested loops to create a symmetrical display that unfolds gracefully across multiple iterations, providing a captivating visual experience.

#include <iostream>
using namespace std;

void printPattern() {
    int n = 10; // Adjust n to change the number of rows
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << '*';
        }
        for (int j = 0; j < 2 * i; j++) {
            cout << ' ';
        }
        for (int j = 0; j < n - i; j++) {
            cout << '*';
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j <= i; j++) {
            cout << '*';
        }
        for (int j = 0; j < 2 * (n - 1 - i); j++) {
            cout << ' ';
        }
        for (int j = 0; j <= i; j++) {
            cout << '*';
        }
        cout << endl;
    }
}

int main() {
    // Call the printPattern function four times for the vertical order
    for (int i = 0; i < 4; i++) {
        printPattern();
        cout << endl;
    }
    return 0;
}
