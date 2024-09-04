#include<stdio.h>
int main()
{
	float unit r,total;
	printf("\n Enter  units:");
	scanf("%f",&units);
	if(unit>0 && unit<=100)
	{
		r=50+total*0.60;
        printf("\n amo %f",r);
	}
	else
	{
		if(r>100 && r<=300)
		{
			r=(unit*0.80)+50;
            printf("\n2. amo :%f",r);
		}
        else
        {
            if(r>300)
            {
                r=(unit*0.90)+50;
                printf("\n3. amo :%f",r);
            }
        }
    }
        if(r>=300)
        {
            total=r*1.15;
            printf("\n4. total :%f",r);
        }
	return 0;
}