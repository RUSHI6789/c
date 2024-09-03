#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter value a:");
	scanf("%d",&a);
	printf("Enter value b:");
	scanf("%d",&b);

	printf("\n value: a: %d\t b: %d",a,b);
	//printf("\n sizeof int %d:",sizeof);

	printf("\n address: a: %u\t b: %u",&a,&b);

	printf("\n Enter a and b:");
	scanf("%d%d",&a,&b);

	printf("\n value: a: %d\t b: %d",a,b);
	printf("\n address: a: %u\t b: %u",&a,&b);

	return 0;
}