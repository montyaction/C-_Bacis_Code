// Constants
// When you do not want others (or yourself) to override existing variable values, use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only):

// Example

#include <iostream>
using namespace std;

int main() {
    const int myNum = 15;
    myNum = 10;
    cout << myNum;
    return 0;
}