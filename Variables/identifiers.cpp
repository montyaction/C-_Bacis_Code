// C++ Identifiers
// All C++ variables must be identified with unique names.

// These unique names are called identifiers.

// Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).

// Note: It is recommended to use descriptive names in order to create understandable and maintainable code:

// Example

#include <iostream>
using namespace std;

int main() {
    // Good
    int minutesPerHour = 60;

    // Ok, but so easy to understand what m actually is 
    int m = 60;

    cout << minutesPerHour << "\n";
    cout << m;
    return 0;
}

// The general rules for constructing names for variables (unique identifiers) are:

// Names can contain letters, digits and underscores
// Names must begin with a letter or an underscore (_)
// Names are case sensitive (myVar and myvar are different variables)
// Names cannot contain whitespaces or special characters like !, #, %, etc.
// Reserved words (like C++ keywords, such as int) cannot be used as names