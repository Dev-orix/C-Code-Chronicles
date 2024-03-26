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
