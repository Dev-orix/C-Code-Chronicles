//This C++ program efficiently prints a spiral matrix of size N x N, where N is a positive integer provided by the user. By utilizing a nested loop structure and careful manipulation of indices, it constructs the spiral matrix, filling it with sequential numbers in a clockwise manner. Offering a versatile tool for visualizing numerical patterns, it enhances understanding and exploration of spiral matrices.

#include <iostream>
#include <vector>
using namespace std;

void printSpiral(int N) {
    vector<vector<int>> matrix(N, vector<int>(N, 0));
    int left = 0, right = N - 1;
    int top = 0, bottom = N - 1;
    int current = 1;

    while (left <= right && top <= bottom) {
        for (int i = left; i <= right; ++i) {
            matrix[top][i] = current++;
        }
        top++;

        for (int i = top; i <= bottom; ++i) {
            matrix[i][right] = current++;
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                matrix[bottom][i] = current++;
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                matrix[i][left] = current++;
            }
            left++;
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    if (N <= 0) {
        cout << "N should be a positive integer." << endl;
    }
    else {
        printSpiral(N);
    }

    return 0;
}
