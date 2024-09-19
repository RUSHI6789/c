#include<stdio.h>
void getArea(float res)
{
    printf("\n cir : %.2f",(res));
}
void calArea(float pi,float r)
{
    float res=pi*r*r;
    getArea(res);
}
void getData()
{
    float pi,r;
    printf("enter pi:");
    scanf("%f",&pi);
    printf("enter r:");
    scanf("%f",&r);
    calArea(pi,r);
}
int main()
{
    getData();
    return 0;
}