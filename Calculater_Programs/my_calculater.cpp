#include<iostream>
using namespace std;

int main() {
    int x, y;
    int add;
    int sub;
    int mul;
    int div;
    
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    
    add = x + y;
    cout << "Additon is: " << add << "\n";

    sub = x - y;
    cout << "Subtraction is: " << sub << "\n";

    mul = x * y;
    cout << "Multiplication is: " << mul << "\n";

    div = x / y;
    cout << "Divion is: " << div;
    return 0;
}