#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int maxSize = 100;
    char str[maxSize];
    char tempWord[30];

    cout << "Enter a string: ";
    cin.getline(str, maxSize);

    int length = strlen(str);
    for (int i = 0, j = 0; i <= length; ++i) {
        if (str[i] == ' ' || str[i] == '\0') {
            tempWord[j] = '\0'; 
            cout << tempWord << endl; 
            j = 0; 
        }
        else {
            tempWord[j++] = str[i]; 
        }
    }
    system("pause");
    return 0;
}
