#include<stdio.h>
int main()
{
	int i,j,r,s=65;
	i=0;
	do
	{
		j=0;
		do
		{
			r=65-j;
			printf("%c",i+r);
			++j;
		}while(j<=i);
	++i;
	printf("\n");
	}while(i<=4);
	return 0;
}