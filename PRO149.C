#include<stdio.h>
#include<string.h>
int main()
{
    int i,a=0;
    char str[10];
    printf("enter string:");
    scanf("%s",str);
    printf("\n string :%s",str);
    for(i=0;i<str[i]!='\0';i++)
    {
        a=1+i;
    }
    printf("\n length :%d",a);
    return 0;
}