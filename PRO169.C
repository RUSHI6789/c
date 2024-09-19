#include<stdio.h>
void getArea(int res)
{
    printf("\n squ : %d",(res));
}
void calArea(int l)
{
    int res=l*l;
    getArea(res);
}
void getData()
{
    int l;
    printf("enter l:");
    scanf("%d",&l);
    calArea(l);
}
int main()
{
    getData();
    return 0;
}