#include<stdio.h>
int main()
{
	int i,j;
	i=2;
	do
	{
		j=2;
		do
		{
			printf("%d",i);
			j+=2;
		}while(j<=10);
		i+=2;
		printf("\n");
	}while(i<=10);
	return 0;
}