#include<stdio.h>
int main()
{
    int i,j,k,l;
    char str[10],s[10],c[10];
	printf("Enter string 1:");
	scanf("%s",str);
	printf("Enter string 2:");
	scanf("%s",s);

	for(i=0;i<str[i]!='\0';i++);
    printf("\n length :%d",i);
    for(j=0;j<s[i]!='\0';j++);
    printf("\n length :%d",j);
	
    for(k=0;k<i;k++)
    {
        c[k]=str[k];
    }

    for(l=0;l<(i+j);l++)
    {
        c[1+i]=s[l];
    }
    printf("\n %s",c);
    return 0;
}