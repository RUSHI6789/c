#include<stdio.h>
int main()
{
	int i,j,r=65;
	i=1;
	do
	{
		j=1;
		do
		{
			printf("%c",r);
			r++;
			j++;
		}while(j<=i);
		i++;
		printf("\n");
	}while(i<=5);
	return 0;
}