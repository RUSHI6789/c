#include<stdio.h>
int main()
{
    int m1[5],m2[5],m3[5],n[5],i;
    float r[5],s[5];
    for(i=0;i<5;i++)
    {
        printf("\n enter m1 marks:");
        scanf("%d",&m1[i]);
        printf("\n enter m2 marks:");
        scanf("%d",&m2[i]);
        printf("\n enter m3 marks:");
        scanf("%d",&m3[i]);
        printf("\n enter n marks:");
        scanf("%d",&n[i]);
    }
    printf("\n \t 5 .no");
    
    for(i=0;i<5;i++)
    {
        t[i]=m1[i]+m2[i]+m3[i];
        p[i]=t[i]/300*100;
        printf("\n \t %d \t %d \t %d");

        if(p[i]>75)
        {
            printf("\t A");
        }
        else if(p[i]>60 && p[i]<=75)
        {
            printf("\t B");
        }
        else if(p[i]>=45 && p[i]<=60)
        {
            printf("\t C");
        }
        else 
        {
            if(p[i]>=35 && p[i]<=45)
            {
                printf("\t D");
            }
            else 
            {
                printf("\t fail");
            }
        }
    }
    return 0;
}