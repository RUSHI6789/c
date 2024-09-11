#include<stdio.h>
int main()
{
	int i,j;
	i=5;
	do
	{
		j=i;
		do
		{
			printf("%d",j);
			++j;
		}while(j<=5);
		--i;
		printf("\n");
	}while(i>=1);
	return 0;
}