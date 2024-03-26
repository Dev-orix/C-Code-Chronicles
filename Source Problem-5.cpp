#include <iostream>
using namespace std;

int Euclid_GCD(int m, int n) {
    if (m < 0)
        m = -m;  
    if (n < 0)
        n = -n;  

    int remainder;
    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    return m;
}

int main() {
    int m, n;

    while (true) {
        cout << "Enter two non-zero integers (or 0 to exit): ";
        cin >> m >> n;

        if (m == 0 || n == 0) {
            cout << "Exiting the program......" << endl;
            break;
        }

        int gcd = Euclid_GCD(m, n);
        cout << "GCD of " << m << " and " << n << " is: " << gcd << endl;
        cout << endl;
    }

    return 0;
}
