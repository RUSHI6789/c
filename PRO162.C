#include<stdio.h>
void doSum()
{
    int a,b;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);

	printf("\n sum : %d",a+b);
}
int main()
{
	void doSum();
	doSum();
	return 0;
}