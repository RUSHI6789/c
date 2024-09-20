#include<stdio.h>
float doSum(float r)
{
	return 3.14*r*r;              
}
int main()
{
	float pi,r;
	float doSum(float);
	printf("Enter r:");
	scanf("%f",&r);
	printf("\n cir : %.2f",doSum(r));
	return 0;
}