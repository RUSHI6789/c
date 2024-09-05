#include<stdio.h>
int main()
{
	int i,j,r=11;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d",r);
			r++;
		}
		printf("\n");
	}
	return 0;
}