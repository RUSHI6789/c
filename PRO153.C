#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k;
    char s[10],s1[10];
    printf("enter 1 string");
    scanf("%s",s);
    printf("enter 2 string");
    scanf("%s",s1);

    for(i=0;i<s[i]!='\0';i++)
    printf("len : %d",i);
    for(j=0;j<s1[j]!='\0';j++)
    printf("\n len : %d",j);

    for(k=0;k<1;k++)
    {
        if(s[k] == s1[k] && i==j)
        {
            printf("true");
        }
        else
        {
            printf("flase");
        }
    }
    return 0;
}