#include<stdio.h>
int main()
{
    char ch;
    printf("enter char :");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
    {
        printf("\n capital %C",ch-32);
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("\n small %c",ch+32);
    }
    else
    {
        printf("\n no char");
    }
    return 0;
}