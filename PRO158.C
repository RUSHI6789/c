#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);

    //fflush(stdin);
    printf("enter your choise:");
    //scanf("%c",&ch);

    switch(ch)
    {
        case 'a':
        printf("\n sum : %d",a+b);
        break;

        case 'b':
        printf("\n sub : %d",a-b);
        break;
    }
    return 0;
}
