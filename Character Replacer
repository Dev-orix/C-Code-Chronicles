//This C++ program offers a versatile tool for modifying strings by replacing specified characters. Users can input a string along with the character to find and the replacement character. The program efficiently performs the substitution, providing an enhanced version of the string as output.

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
