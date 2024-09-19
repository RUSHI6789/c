#include<stdio.h>
void doSum()
{
    float pi,r,s;
    printf("enter pi:");
    scanf("%f",&pi);
    printf("enter r:");
    scanf("%f",&r);
    s=pi*r*r;
    printf("\n cir : %.2f",s);
}
int main()
{
    void doSum();
    doSum();
    return 0;
}