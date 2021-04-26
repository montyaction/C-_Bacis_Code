#include<iostream.h>
#include<conio.h>
class add
{
    int a,b,c;
public:
    void input()
    {
        cout<<"Enter Number : ";
        cin>>a>>b;
    }
    void sum()
    {
        c=a+b;
    }
    void show()
    {
        cout<<c;
    }
};
void main()
{
    clrscr();
    add ob;
    ob.input();
    ob.sum();
    ob.show();
    getch();
}
