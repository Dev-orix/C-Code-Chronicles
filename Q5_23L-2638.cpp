#include <iostream>
using namespace std;

int main() {
    
    int x1, y1, x2, y2, x3, y3, x4, y4;
    int pointx, pointy;
    
    cout << "Enter Point P1 (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter Point P2 (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Enter Point P3 (x3 y3): ";
    cin >> x3 >> y3;
    cout << "Enter Point P4 (x4 y4): ";
    cin >> x4 >> y4;
    cout << "Enter Point P (pointX pointY): ";
    cin >> pointx >> pointy;

    bool insideRectangle = (pointx >= x1 && pointx <= x3 && pointy >= y1 && pointy <= y3);

    if (insideRectangle) {
        cout << "The Point lies inside Rectangle." << endl;
    }
    else {
        cout << "The Point does not lie inside Rectangle." << endl;
    }
    return 0;
}
