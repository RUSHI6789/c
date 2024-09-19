#include<stdio.h>
void getArea(int res)
{
    printf("\n rec : %d",(res));
}
void calArea(int l,int b)
{
    int res=l*b;
    getArea(res);
}
void getData()
{
    int l,b;
    printf("enter l :");
    scanf("%d",&l);
    printf("enter b :");
    scanf("%d",&b);
    calArea(l,b);
}
int main()
{
    getData();
    return 0;
}