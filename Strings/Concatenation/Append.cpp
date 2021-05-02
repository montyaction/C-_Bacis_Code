#include <iostream>
#include <string>
using namespace std;

int main() {
    string fname = "Spider ";
    string lname = "monty";
    string fullname = fname.append(lname);
    cout << fullname;
    return 0;
}