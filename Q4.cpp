#include <iostream>
using namespace std;
int main() {
   
    char charArray[100];

    cout << "Enterr a character array: ";
    cin.getline(charArray, 100);

    int totalCharacters = 0;
    int uppercase = 0;
    int lowercase = 0;
    int space = 0;

    for (int i = 0; charArray[i] != '\0'; ++i) {
        totalCharacters++;

        if (charArray[i] >= 'A' && charArray[i] <= 'Z') {
            uppercase++;
        }
   
        else if (charArray[i] >= 'a' && charArray[i] <= 'z') {
            lowercase++;
        }
       
        else if (charArray[i] == ' ') {
            space++;
        }
    }

    cout << "\nResults:\n";
    cout << "Total Characters: " << totalCharacters << "\n";
    cout << "Uppercase Letters: " << uppercase << "\n";
    cout << "Lowercase Letters: " << lowercase << "\n";
    cout << "Spaces: " << space << "\n";

    return 0;
}
