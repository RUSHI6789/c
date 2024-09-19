#include<stdio.h>
void doSum(int l,int b)
{
    printf("\n rec : %d",l*b);
}
int main()
{
    int l,b;
    void doSum(int,int);
    printf("enter l:");
    scanf("%d",&l);
    printf("enter b:");
    scanf("%d",&b);
    doSum(l,b);
    return 0;
}