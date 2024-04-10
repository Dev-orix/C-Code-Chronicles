//This C++ program constructs a staircase of a specified height. By utilizing nested loops, it meticulously builds each row of the staircase, adjusting the spacing and adding '#' symbols to create the ascending structure. With its dynamic approach, it offers a versatile tool for generating visually appealing staircases of varying heights.

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
