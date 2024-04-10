//This C++ program efficiently computes the greatest common divisor (GCD) of two non-zero integers using Euclid's algorithm. By continuously applying Euclid's algorithm within a loop structure, it navigates through the integers, unraveling their common divisors. Offering a dynamic and user-friendly approach, it empowers users to explore and understand the foundational concept of GCD while providing accurate results for diverse integer inputs.

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
