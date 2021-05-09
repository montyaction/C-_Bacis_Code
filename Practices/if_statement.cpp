// Program to print positive number entered by the user
// If the user enters a negative number, it is skipped

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Type an integer: ";
    cin >> num;

    // check if the number is positive
    if (num > 0) {
        cout << "You entered a positive integer: " << num << endl;
    }
    cout << "This statement is always executed.";
    return 0;