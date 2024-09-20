#include<stdio.h>
int main()
{
    int x;
    int y;
    a=10;
    y=x;
    y=&x;
    printf("\n value of : %d",x);
    printf("\n add of x: %u",&x);
    printf("\n add of x using y : %d",y);
    printf("\n value of x using y: %d",*y);
    printf("\n add of y : %u",&y);
    return 0;
}