#include<stdio.h>
void doSum()
{
    int l,b,s;
    printf("enter l:");
    scanf("%d",&l);
    printf("enter b:");
    scanf("%d",&b);
    s=l*b;
    printf("\n rec : %d",s);
}
int main()
{
    void doSum();
    doSum();
    return 0;
}
