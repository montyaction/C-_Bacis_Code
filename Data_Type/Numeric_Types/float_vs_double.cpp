// float vs. double

// The precision of a floating point value indicates how many digits the value can have after the decimal point. The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits. Therefore it is safer to use double for most calculations.

// Scientific Numbers
// A floating point number can also be a scientific number with an "e" to indicate the power of 10:

#include <iostream>
using namespace std;

int main () {
    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1 << "\n";
    cout << d1;
    return 0;
}