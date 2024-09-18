#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    int i,j,k=0,l=0,p=0;
    printf("enter string");
    scanf("%s",a);
    for(i=0;i<a[i]!='\0';i++)
    
    for(j=1-i;j>=0;j--)
    {
        b[k]=a[j];
        k++;
    }
    b[k]='\0';
    printf("\n reverse string : %s",b);
    for(p=0;p<=i;p++)
    {
        if(a[p]==b[p])
        {
            l++;
        }
        else
        {
            break;
        }
    }
    if(l-1==i)
    {
        printf("\n string palidrome");
    }
    else
    {
        printf("\n string not palidrome");
    }
    return 0;
}