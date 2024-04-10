//This C++ program analyzes a set of real numbers provided by the user, categorizing them into positive, negative, or zero. It ensures that the user inputs a positive integer N and then prompts for N real numbers. After gathering the data, it calculates and presents the ratio of positive, negative, and zero numbers within the set, offering valuable insights into the distribution of numeric values.

#include <iostream>
using namespace std;

int main() {
    int N;
    int positive_Count = 0, negative_Count = 0, zero_Count = 0;

    do {
        cout << "Enter the value of N: ";
        cin >> N;
        if(N<=0)
            cout << "You've entered a negative number! " << endl;
    } while (N <= 0);

    for (int i = 0; i < N; ++i) {
        double num;
        cout << "Enter a real number: ";
        cin >> num;

        if (num > 0) {
            positive_Count++;
        }
        else if (num < 0) {
            negative_Count++;
        }
        else {
            zero_Count++;
        }
    }

    cout.precision(4);
    cout << "Positive Ratio: " << static_cast<double>(positive_Count) / N << endl;
    cout << "Negative Ratio: " << static_cast<double>(negative_Count) / N << endl;
    cout << "Zero Ratio: " << static_cast<double>(zero_Count) / N << endl;

    return 0;
}
