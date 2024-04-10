//This C++ program crafts a rectangular pattern of numbers, where each row consists of N sequential numbers, incrementing from 1 to N^2. Through meticulous loop manipulation, it constructs a visually structured pattern that highlights the sequential arrangement of numbers within a rectangular grid. Empowering users to explore and create diverse numerical landscapes, it offers a versatile tool for pattern visualization and analysis.

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

    for (int i = 1; i <= N; ++i) {
        
        for (int j = 0; j < N; ++j) {
            
            int num = i + j * N;
            cout << num;

            if (j == N - 1) {
                cout << endl;
            }
            else {
               cout << " ";
            }
        }
    }
    return 0;
}
