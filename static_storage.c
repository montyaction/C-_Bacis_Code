#include<stdio.h>
#include<conio.h>
void fun();
void main()
{
    fun();
    fun();
    fun();
}
void fun()
{
    // int a = 1;
    static int b = 1;
    // printf("%d",a);
    printf("%d",b);
    b++;
}