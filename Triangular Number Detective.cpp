//This C++ program plays the role of a detective, determining whether a given number is a triangular number or not. By employing a systematic approach to calculate triangular numbers, it sheds light on the intriguing world of numerical patterns, providing clarity and insight into the properties of the input number.

#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Enter a number: ";
    cin >> N;

    int sum = 0;
    int i = 1;

    while (sum < N) {
        sum = sum + i;
        ++i;
    }
    
    if (sum == N) {
        cout << N << " is a triangular number." << endl;
    }
    else {
        cout << N << " is not a triangular number." << endl;
    }
    system("pause");
    return 0;
}
