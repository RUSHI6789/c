#include<stdio.h>
int main()
{
    int s=0,i;
    i=1;
    while(i<=10)
    if(i%2==0)
    {
        s+=i;
        i++;
    }
    printf("odd num 1 to 10 total %d",s);

    return 0;
}