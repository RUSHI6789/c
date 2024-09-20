#include<stdio.h>
float doSum(float b,float h)
{
	return 0.5*b*h;
}					
int main()
{
	float b,h;
	float doSum(float ,float);
	printf("Enter b:");
	scanf("%f",&b);
	printf("Enter h:");
	scanf("%f",&h);
	printf("\n tri : %.2f",doSum(b,h));
	return 0;
}