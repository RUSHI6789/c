#include<stdio.h>
void doSum(float b,float h)
{
    printf("\n tri : %.2f",0.5*b*h);
}
int main()
{
    float b,h;
    void doSum(float,float);
    printf("enter b:");
    scanf("%f",&b);
    printf("enter h:");
    scanf("%f",&h);
    doSum(b,h);
    return 0;
}