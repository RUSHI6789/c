#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<=10;i++)
	{
		printf("\n %d",i);
		sum+=i;	
	}
	printf("\n 1 to 10 total %d",sum);
	return 0;
}