#include<stdio.h>
int main()
{
	float i,r=0.5,n;
	printf("\n Enter num");
	scanf("%f",&n);
	for(i=0.5;i<=n;i++)
	{
		printf("\n %.2f",r);
		r+=i;
	}
	return 0;
}