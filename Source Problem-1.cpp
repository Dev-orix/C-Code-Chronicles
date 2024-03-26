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
