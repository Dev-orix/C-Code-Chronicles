// This C++ program diligently calculates the factorial of a user-provided number within the range of 1 to 10. By employing a recursive approach, it navigates through the factorial computation process, unraveling the numeric complexity and delivering precise results. With its robust error handling, it ensures accurate factorial calculations while providing valuable insights into numerical operations.

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n < 1 || n > 10) {
        return -1; 
    }

    if (n == 1) {
        return 1;
    }
    else {
      
        return n * factorial(n - 1);;
    }
}

int main() {
    int number;
    cout << "Enter a number between 1 and 10: ";
    cin >> number;

    int result = factorial(number);

    if (result == -1) {
        cout << "Number is out of range. " << endl;
    }
    else {
        cout << "Factorial of " << number << " is " << result << endl;
    }

    return 0;
}
