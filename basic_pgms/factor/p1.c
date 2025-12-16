#include<stdio.h>
void main()
{
	int num,f=1;
	printf("enter number:");
	scanf("%d",&num);
	
	int i;
	for(i=1;i<=num;i++)
	{
		f=f*i;
	}
printf("%d",f);

}
