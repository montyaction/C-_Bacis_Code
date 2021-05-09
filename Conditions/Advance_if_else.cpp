#include <iostream>
using namespace std;
int main() {
   
    int savings;
    cout << "Enter your Money : ";
    cin >> savings;

    if(savings>5000) {
        if(savings>10000) {
            cout << "Roadtrip with neha\n";
        } else {
            cout << "Congras U will today ride 'Neha' full-on masti\n";
        }
    } else if(savings>2000) {
        cout << "Congras u one night stand with Rashmi\n";
    } else {
        cout << "Okay u have so fun and masti with Friends\n";
    }
    return 0;
}