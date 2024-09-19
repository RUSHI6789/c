#include<stdio.h>
void doSum(int p,int r,int n)
{
    printf("\n si : %d",p*r*n/100);
}
int main()
{
    int p,r,n;
    void doSum(int,int,int);
    printf("enter p:");
    scanf("%d",&p);
    printf("enter r:");
    scanf("%d",&r);
    printf("enter n:");
    scanf("%d",&n);
    doSum(p,r,n);
    return 0;
}