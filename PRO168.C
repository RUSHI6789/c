#include<stdio.h>
void getArea(int res)
{
    printf("\n si : %d",(res));
}
void calArea(int p,int r,int n)
{
    int res=p*r*n/100;
    getArea(res);
}
void getData()
{
    int p,r,n;
    printf("enter p:");
    scanf("%d",&p);
    printf("enter r:");
    scanf("%d",&r);
    printf("enter n:");
    scanf("%d",&n);
    calArea(p,r,n);
}
int main()
{
    getData();
    return 0;
}