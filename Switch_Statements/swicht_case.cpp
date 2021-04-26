
// Program to build a simple calculator using switch statement

#include<iostream>
using namespace std;

int main() {
char oper;
double n1, n2;
cout<<"Type an operator(+,-,*,/): ";
cin>>oper;
cout<<"Type a number: ";
cin>>n1;
cout<<"Type a another number: ";
cin>>n2;

switch(oper){

case '+':
    cout<<n1<<" + "<<n2<<" = "<<n1 + n2;
    break;

case '-':
    cout<<n1<<" - "<<n2<<" = "<<n1 - n2;
    break;

case '*':
    cout<<n1<<" * "<<n2<<" = "<<n1 * n2;
    break;

case '/':
    cout<<n1<<" / "<<n2<<" = "<<n1 / n2;
    break;

default:

    //Operator is doesn't match any case constant(+,-,*,/)

    cout<<"Error! The operator is not correct";
    break;
    }
    return 0;
}
