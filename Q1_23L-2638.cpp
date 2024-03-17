#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int Size = 100;
    char arr[Size];
    char findChar, replaceChar;

    cout << "Enter a string: ";
    cin.getline(arr, Size);

    cout << "Enter the character to find: ";
    cin >> findChar;

    cout << "Enter the character to replace with: ";
    cin >> replaceChar;

    int length = strlen(arr);
    for (int i = 0; i < length; ++i) {
        if (arr[i] == findChar) {
            arr[i] = replaceChar;
        }
    }

    cout << "String after replacement: " << arr << endl;
    system("pause");
    return 0;
}
