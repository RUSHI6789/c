#include<stdio.h>
void getArea(float res)
{
    printf("\n tri : %.2f",(res));
}
void calArea(float b,float h)
{
    float res=0.5*b*h;
    getArea(res);
}
void getData()
{
    float b,h;
    printf("enter b:");
    scanf("%f",&b);
    printf("enter h:");
    scanf("%f",&h);
    calArea(b,h);
}
int main()
{
    getData();
    return 0;
}