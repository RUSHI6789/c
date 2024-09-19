#include<stdio.h>
void doSum()
{
    int l,s;
    printf("enter l:");
    scanf("%d",&l);
    s=l*l;
    printf("\n squ : %d",s);
}
int main()
{
    void doSum();
    doSum();
    return 0;
}
