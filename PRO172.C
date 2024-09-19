#include<stdio.h>
void doSum()
{
    int p,r,n,s;
    printf("enter p:");
    scanf("%d",&p);
    printf("enter r:");
    scanf("%d",&r);
    printf("enter n:");
    scanf("%d",&n);
    s=p*r*n/100;
    printf("\n si : %d",s);
}
int main()
{
    void doSum();
    doSum();
    return 0;
}
