#include<stdio.h>
int main()
{
	int i,j,r=1;
	i=0;
	while(i<=4)
	{
		j=0;
		while(j<=i)
		{
			printf("%d",r+j);
			j++;
		}
		i++;
		printf("\n");
	}
	return 0;
}