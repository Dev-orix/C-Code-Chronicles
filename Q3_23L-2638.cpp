#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100;
    int arr[maxSize];
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size;) {
            if (arr[i] == arr[j]) {
                
                for (int k = j; k < size - 1; ++k) {
                    arr[k] = arr[k + 1];
                }
                --size; 
            }
            else {
                ++j;
            }
        }
    }
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Size of the new array: " << size << endl;

    system("pause");
    return 0;
}
