/* private----->1. member of class
                2. friend           */

#include<iostream.h>
#include<conio.h>
class A
{
private:
    int a, b:
public:
    void show()
    {
        a = 10; b = 20;
        cout << a << ends << b << endl;
    }
    friend class B;
};
class B
{
public:
    void disp(A ref)
    {
        ref .a = 30; ref .b = 40;
        cout << ref.a << ends <<ref.b;
    }
};
void main()
{
    clrscr();
    A obj;      B obj2;
    obj.show();
    obj2.disp(obj);
    getch();

}
