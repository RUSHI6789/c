#include<stdio.h>
int main()
{
	int i,a[5]={11,12,13,14,15},b[5]={21,22,23,24,25},c[10],r=0,s=0;
	for(i=0;i<10;i++)
	/*{
		c[i]=b[i];
		b[i]=c[i];
	}
	for(i=0;i<10;i++)
	{
		printf("\t %d",c[i]);
	}*/
	for(i=0;i<10;i++)
	{
		if(i%2==0)
     		{
            		c[i]=a[r];
           	        r++;
        	}
        	else
        	{
            		c[i]=b[s];
            		s++;
        	}
	}
	for(i=0;i<10;i++)
	{
		printf("\t %d",c[i]);
	}
	return 0;
}