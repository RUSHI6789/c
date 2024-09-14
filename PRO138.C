#include<stdio.h>
int main()
{
	int a[10],i,sum=0,o=0,e=0,ep=0,op=0;
	for(i=0;i<10;i++)
	{
		printf("Enter a[%d]",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("\n a[%d] : %d",i+1,a[i]);
	}
	for(i=0;i<10;i++)
	{
		sum+=a[i];
	}
	printf("\n array total a[i] :%d",sum);
	for(i=0;i<10;i++)
	{
		if(i%2==0)
		{
			e=e+a[i];
		}
		else
		{
			o=o+a[i];
		}
		if(i%2==0)
		{
			ep=ep+a[i];
		}
		else
		{
			op=op+a[i];
		}
	}
	printf("\n even total a[i] : %d",e);
	printf("\n odd total a[i] : %d",o);
	printf("\n even total a[i] : %d",ep);
	printf("\n odd total a[i] : %d",op);
	return 0;
}
       