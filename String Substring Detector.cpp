//This C++ program acts as a detective, determining whether string2 is a substring of string1. Utilizing a systematic approach to compare the two strings, it unveils the presence of string2 within string1, providing valuable insights into their textual relationship.

#include <iostream>
using namespace std;

int main() {
     
    char string1[100];
    char string2[100];
    
    cout << "Enter string1: ";
    cin.getline(string1, 100);

    cout << "Enter string2: ";
    cin.getline(string2, 100);

    bool isSubstring = false;

    for (size_t i = 0; i <= string1.length() - string2.length() && !isSubstring; ++i) {
        isSubstring = true;
        for (size_t j = 0; j < string2.length(); ++j) {
            if (string1[i + j] != string2[j]) {
                isSubstring = false;
                break;
            }
        }
    }

    if (isSubstring = true) {
        cout << "String 2 is a substring of String 1\n";
    }
    else {
        cout << "String 2 is not a substring of String 1\n";
    }

    return 0;
}
