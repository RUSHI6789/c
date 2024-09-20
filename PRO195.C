#include<stdio.h>
int recur (int n)
{
    if(n>0)
    {
        recur(n-1);
        printf("\t %d",n);
    }
}
int main()
{
    int a=3,b=2,c=1;
    recur(a);
    recur(b);
    recur(c);
    return 0;
}