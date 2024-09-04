#include<stdio.h>
int main()
{
	int i,even=0,odd=0;
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
		{
			printf("\n %d",even);
			even=even+i;
		}
		else
		{
			printf()
			odd=odd+i;
		}
	}
	printf("\n even total 1 to 50 total %d",even);
	printf("\n odd total 1 to 50 total %d",odd);
	return 0;
}