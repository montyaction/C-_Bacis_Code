// Note that if you assign a new value to an existing variable, it will overwrite the previous value:

#include <iostream>
using namespace std;

int main() {
    int myNum = 15;     // Now myNum is 15
    myNum = 10;         // Now myNum is 10
    cout << myNum;
    return 0;
}