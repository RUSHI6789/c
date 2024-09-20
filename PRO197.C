#include<stdio.h>
int main()
{
    int x,y;
    int z;
    x=10,y=20;
    z=&x;
    printf("\n value of z : %d",*z);
    printf("\n value of y : %d",*z);
    printf("\n value of x : %d",y);
    return 0;
}