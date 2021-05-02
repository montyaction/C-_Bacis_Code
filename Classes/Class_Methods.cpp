#include <iostream>
using namespace std;

class MyClass {                     // The class
    public:                         // Access specifier
        void myMethod() {           // Method/Function
            cout << "Hello World!";
        }
};

int main() {
    MyClass myObj;      // Create an object of MyClass
    myObj.myMethod();   // Call The method
    return 0;
}