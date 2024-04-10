//This C++ program generates a square pattern of numbers, where each row contains N numbers, incrementing from 1 to N^2. By meticulously controlling the loop structure and conditional formatting, it constructs a visually appealing pattern that showcases the numeric symmetry within a square matrix. Empowering users to explore and create intricate patterns, it serves as a versatile tool for numerical visualization and exploration.

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    if (N <= 0) {
        cout << "N must be a positive integer." << endl;
        return 1;
    }

    for (int i = 1; i <= N * N; ++i) {
        
        cout << i;

        if (i % N == 0) {
            cout << endl;
        }
        else {
            cout << " ";
        }
    }
    return 0;
}
