#include<stdio.h>
float doSum()
{
	float r;
	printf("Enter r:");
	scanf("%f",&r);
	return 3.14*r*r;
}
int main()
{
	float sum;
	float doSum();
	printf("\n cir : %.2f",doSum());
	return 0;
}