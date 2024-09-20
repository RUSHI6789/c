#include<stdio.h>
int recur(int n)
{
    printf("\n winding %d",n);
    if(n>1)
    return n+recur(n-1);
    return n;
}
int main()
{
    int a=10,total;
    total=recur(a);
    printf("\n %d",total);
    return 0;
}