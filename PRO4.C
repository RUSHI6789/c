#include<stdio.h>
int main()
{
    int a=10,b=20,c=5,d=4,e=1,z;
    int a1=10,b1=20,c1=4,d1=5,e1=1,z1;

    z=a+b/c*d-e;
    printf("\n a+b/c*d-e = %d",z);

    z1=a1+b1/c1*d1-e1;
    printf("\n a1+b1/c1*d1-e1 = %d",z1);

    return 0;
}