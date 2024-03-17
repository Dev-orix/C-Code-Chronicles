#include <iostream>
#include <cstring>
using namespace std;

int main() {
   
    char string1[100], string2[100];

    cout << "Enter string1: ";
    cin.getline(string1, 100);

    cout << "Enter string2: ";
    cin.getline(string2, 100);

    // for PALINDROMES
    bool isPalindrome1 = true;
    for (int i = 0, j = strlen(string1) - 1; i < j; ++i, --j) {
        if (string1[i] != string1[j]) {
            isPalindrome1 = false;
            break;
        }
    }

    bool isPalindrome2 = true;
    for (int i = 0, j = strlen(string2) - 1; i < j; ++i, --j) {
        if (string2[i] != string2[j]) {
            isPalindrome2 = false;
            break;
        }
    }
    // for ANAGRAMS
    int count1[256] = { 0 };  
    int count2[256] = { 0 };

    int length1 = strlen(string1);
    int length2 = strlen(string2);

    if (length1 != length2) {
        cout << "Neither palindromes nor anagrams.\n";
        return 0;
    }

    for (int i = 0; i < length1; ++i) {
        ++count1[char(string1[i])];
        ++count2[char(string2[i])];
    }

    bool areAnagrams = true;
    for (int i = 0; i < 256; ++i) {
        if (count1[i] != count2[i]) {
            areAnagrams = false;
            break;
        }
    }

    if ((isPalindrome1 && isPalindrome2) || areAnagrams) {
        cout << "Both strings are palindromes or anagrams of each other.\n";
    }
    else if (isPalindrome1 && isPalindrome2) {
        cout << "Both strings are palindromes of each other.";
    }
    else if (areAnagrams) {
        cout << "Both strings are Anagrams of each other.";
    }
    else {
        cout << "Strings are Neither palindromes nor anagrams.\n";
    }

    return 0;
}
