#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int lower, higher;

    cout << "Enter the lower limit: ";
    cin >> lower;

    cout << "Enter the upper limit: ";
    cin >> higher;

    cout << "Armstrong numbers between " << lower << " and " << higher << " are:" << endl;

    for (int num = lower; num <= higher; ++num) {
        int sum = 0;
        int temp = num;
        int n = 0;

        while (temp != 0) {
            temp /= 10;
            ++n;
        }

        temp = num;

        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, n);
            temp /= 10;
        }

        if (sum == num) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}
