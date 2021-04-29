// C++ User Input
// You have already learned that cout is used to output (print) values. Now we will use cin to get user input.

// cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).

// In the following example, the user can input a number, which is stored in the variable x. Then we print the value of x:

// Example

#include <iostream>
using namespace std;

int main() {
    int x;
  cout << "Type a number: "; // Type a number and press enter
  cin >> x; // Get user input from the keyboard
  cout << "Your number is: " << x;
  return 0;
}