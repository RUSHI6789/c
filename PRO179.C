#include<stdio.h>
void doSum(int l)
{
    printf("\n squ : %d",l*l);
}
int main()
{
    int l;
    void doSum(int);
    printf("enter l:");
    scanf("%d",&l);
    doSum(l);
    return 0;
}