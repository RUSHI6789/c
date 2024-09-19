#include<stdio.h>
void doSum(int p,int q)
{
    printf("\n sum : %d",p+q);
}
int main()
{
    int a,b;
    void doSum(int,int);
    printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
    doSum(a,b);
    return 0;
}