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
