#include<stdio.h>
void doSum(float pi,float r)
{
    printf("\n cir : %.2f",pi*r*r);
}
int main()
{
    float pi,r;
    void doSum(float,float);
    printf("enter pi:");
    scanf("%f",&pi);
    printf("enter r:");
    scanf("%f",&r);
    doSum(pi,r);
    return 0;
}