#include <iostream>
using namespace std;

int main() {
	int n, i, j, k;
	cout << "Enter the size of the array: ";
	cin >> n;

	int arr[100];
	cout << "Enter " << n << " elements: ";
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n;) {
			if (arr[i] == arr[j]) {
				for (k = j; k < n; k++) {
					arr[k] = arr[k + 1];
				}
				n--;
			}
			else {
				j++;
			}
		}
	}

	cout << "New array with unique elements:" << endl;
	for (i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl << "Size of the new array: " << n << endl;

	return 0;
}
