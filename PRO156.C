#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,j,s;
    printf("enter string");
    scanf("%[^\n]",str);
    s=strlen(str);
    for(i=0;i<s;i++)
    {
        for(j=0;j<s-i;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
    return 0;
}