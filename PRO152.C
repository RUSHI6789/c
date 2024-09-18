#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,d;
    char a[10],b[10];
    printf("enter string");
    scanf("%s",a);

    for(i=0;i<a[i]!='\0';i++)
    printf("\n string : %s",a);
    for(d=i-1;d>=0;d--)
    {
        b[j]=a[d];
        j++;
    }
    b[j]='\0';
    printf("\n reverse : %s",b);
    return 0;
}