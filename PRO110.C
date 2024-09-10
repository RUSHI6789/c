#include<stdio.h>
int main()
{
	int i,j;
	i=65;
	do
	{
		j=65;
		do
		{
			printf("%c",i);
			j++;
		}while(j<=69);
		i++;
		printf("\n");
	}while(i<=69);
	return 0;
}