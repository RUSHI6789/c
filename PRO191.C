#include<stdio.h>
float doSum()
{
	float b,h;
	printf("Enter b:");
	scanf("%f",&b);
	printf("Enter h:");
	scanf("%f",&h);

	return 0.5*b*h;
}
int main()
{
	float sum;
	float doSum();
	printf("\n tri : %.2f",doSum());
	return 0;
}