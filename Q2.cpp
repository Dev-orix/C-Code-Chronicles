#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[100];
	cout << "Enter a string: ";
	cin.getline(str, 100);

	char tempWord[30];
	int j = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ') {
			tempWord[j] = '\0';
			cout << tempWord << endl;
			j = 0;
		}
		else {
			tempWord[j++] = str[i];
		}
	}
	tempWord[j] = '\0';
	cout << tempWord << endl;

	return 0;
}
