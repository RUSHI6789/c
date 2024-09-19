#include<stdio.h>
void doSum()
{
    float b,h,s;
    printf("enter b:");
    scanf("%f",&b);
    printf("enter h:");
    scanf("%f",&h);
    s=0.5*b*h;
    printf("\n tri : %.2f",s);
}
int main()
{
    void doSum();
    doSum();
    return 0;
}