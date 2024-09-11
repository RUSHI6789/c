#include<stdio.h>
int main()
{
	int i,j,a=65;
	i=0;
	while(i<=4)
	{
		j=0;
		while(j<=i)
		{
			printf("%c",a+j);
			j++;
		}
		i++;
		printf("\n");
	}
return 0;
}