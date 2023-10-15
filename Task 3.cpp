#include <iostream>
using namespace std;

bool isArmstrong(int number) {
    int originalNumber = number;
    int sum = 0;

    while (number > 0) {
        int digit = number % 10;
        sum += pow(digit, 3);
        number /= 10;
    }

    return sum == originalNumber;
}

int main() {
    cout << "Armstrong numbers between 1 and 500 are:" << endl;

    for (int i = 1; i <= 500; ++i) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
