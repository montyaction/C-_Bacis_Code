#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullname;
    cout << "Type your full name: ";
    getline (cin, fullname);
    cout << "Your name is: " << fullname;
    return 0;
}