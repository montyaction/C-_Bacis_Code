# include <stdio.h>

int a[10] = {0,1,2,3,4,5,6,7,8,9};
int b[10];

void main()
{
    int i;
    static int k = 3;

    for(i = 0; i < 10; i++) {
        printf("%d\n", a[i]);
        b[i] = k*a[i];
    }
}