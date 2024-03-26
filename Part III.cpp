#include <iostream>
using namespace std;

int main() {

	int Height;

	cout << "Enter Height of Staircase: ";
	cin >> Height;

	for (int Row = 1; Row <= Height; Row++)
	{
		for (int Space = 1; Space <= Height - Row; Space++) {
			cout << " ";
		}
		for (int a = 1; a <= Row; a++) {
			cout << "#";
		}
		cout << endl;
	}

	return 0;
}