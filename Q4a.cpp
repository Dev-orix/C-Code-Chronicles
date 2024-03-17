#include <iostream>
using namespace std;

int main() {
	int num=0, sum = 0, i = 1;
	cout << "Enter a number: ";
	cin >> num;

	while (sum < num) {
		sum = sum + i;
		if (sum == num) {
			cout << num << " is a triangular number." << endl;
			return 0;
		}
		i++;
	}

	cout << num << " is not a triangular number." << endl;
	
	system("pause");
	return 0;
}
