#include<stdio.h>
int main()
{
	int i,j,r=1;
	i=0;
	do
	{
		j=0;
		do
		{
			printf("%d",r+i);
			j++;
		}while(j<=i);
		i++;
		printf("\n");
	}while(i<=4);
	return 0;
}