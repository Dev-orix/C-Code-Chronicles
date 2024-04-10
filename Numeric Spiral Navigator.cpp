//This C++ program navigates through a numeric spiral of size N, unfolding a path of sequential numbers. Employing a spiral traversal algorithm, it dynamically computes the positions of numbers within the spiral, ensuring a coherent and visually intriguing sequence. By enabling users to explore and visualize numeric spirals, it offers a versatile tool for mathematical exploration and pattern analysis.

#include <iostream>
using namespace std;

void printSpiral(int N) {
    int left = 0, right = N - 1, top = 0, bottom = N - 1;
    int current = 1;

    while (left <= right && top <= bottom) {
       
        for (int i = left; i <= right; i++) {
            cout << N * top + i + 1 << " ";
            current++;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            cout << N * i + right + 1 << " ";
            current++;
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << N * bottom + i + 1 << " ";
                current++;
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << N * i + left + 1 << " ";
                current++;
            }
            left++;
        }
    }
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    printSpiral(N);
    return 0;
}
