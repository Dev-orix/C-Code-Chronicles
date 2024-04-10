//This C++ program efficiently calculates the square root of a non-negative number with a specified limit on accuracy. Utilizing the renowned method of binary search within a limited range, it dynamically approaches the square root, ensuring the desired precision. Empowering users to explore numeric roots with precision, it offers a versatile tool for mathematical computations while delivering accurate results for diverse inputs.

#include <iostream>
using namespace std;

double Eucliden_SquareRoot(double R, double limit) {
    double Left = 0.0;
    double Right = R + 1.0;

    while (Right - Left > limit) {
        double Mid = (Left + Right) / 2.0;

        if (Mid * Mid > R) {
            Right = Mid;
        }
        else {
            Left = Mid;
        }
    }
    return (Left + Right) / 2.0;
}
int main() {
    double number, limit;

    while (true) {
        cout << "Enter a non-negative number (enter a -ive number to terminate the program) : ";
        cin >> number;
         if (number < 0.0) {
            cout << "Exiting the program......." << endl;
            break; ;
        }
        cout << "Enter the limit on accuracy: ";
        cin >> limit;
        if (limit <= 0.0) {
            cout << "Limit must be greater than 0. " << endl;
            break;
        }

        double result = Eucliden_SquareRoot(number, limit);
        cout << "Square root of " << number << " is approximately: " << result << endl;
        cout << endl;
    }
    return 0;
}
