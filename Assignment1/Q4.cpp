//4.4 Power Function
//Implement a C++ power function P ow(x, y) that has a time complexity of O(log n)
//without using C++ built-in power function. Write comments to show why it is
//O(log n).

// Alex McGrath - 21397613

#include <iostream>
using namespace std;

// This is the power function, it is first in the code so it can be called from anywhere else in the code
int Pow(int x, int y) {
    int result = 1; // this stores the result as 1, this is because multiplying by 1 will return the same value
    int base = x;   // the current base from the input is stored here

    // The time complexity of this loop is O(log n), with n = y  
    // The reason this is, is that instead of performing y multiplications, we half y in each iteration
    // Every time y is halfed, we square the base, which reducs the problem size
    // By reducing y exponentially (dividing it by 2), the total number of iterations is relevant to log(y)
    // This allows the code to quickly calculate x^y without doing y multiplications, which gives me O (log n)

    while (y > 0) {
        // If y is odd, multiply the result by the base
        if (y % 2 == 1) {
            result *= base; // this multiplies the base by the result and stores it in the result variable
        }

        // square the base (base = base^2)
        base *= base;

        // half the exponent (y = y / 2)
        y /= 2;
    }

    return result;
}

int main() {
    // this is where the base and exponent are intitially initialised
    int x, y;
    cout << "Enter base (x): " << endl;
    cin >> x; // this saves the inputted base as x

    cout << "Enter exponent (y): " << endl;
    cin >> y; // this saves the inputted exponent as y

    cout << x << "^" << y << " = " << Pow(x, y) << endl; // this prints out the whole statement while also sending the variables x and y to the power function

    return 0;
}
