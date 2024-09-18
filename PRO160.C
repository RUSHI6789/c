#include<stdio.h>
int main()
{
    int i=1;
    for(i=1;i>=10;i++)
    {
        printf("\t %d",i);
    }
    label:
    printf("\t %d",i++);
    if(i<=10)
        goto label;
    return 0;
}