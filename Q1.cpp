#include <iostream>
using namespace std;

int main(){
	char Arr1[100];
	char Arr2[100];
	char find, replace;
	cout << "String: ";
	cin.getline(Arr1, 100);
	cout << "Find: ";
	cin >> find;
	cout << "Replace with: ";
	cin >> replace;
	int i = 0;
	for (i = 0; i != '/0'; i++){
		if (Arr1[i] == find){
			Arr1[i] = replace;
		}
		Arr1[i] = Arr2[i];
	}

	cout << "OUTPUT: ";
	for (int j = 0; j != '/0'; j++){
		cout << Arr2[j];
	}
	system("pause");
	return 0;
}