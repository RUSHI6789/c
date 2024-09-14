#include<stdio.h>
int main()
{
	int a[5],b[5],i;
	for(i=0;i<5;i++)
	{
		printf("Enter a[%d]",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("Enter b[%d]",i+1);
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n a[%d] : %d",i+1,a[i]);
		printf("\n b[%d] : %d",i+1,b[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n a[%d]+b[%d]=%d",i+1,i+1,a[i]+b[i]);
	}
	return 0;
}