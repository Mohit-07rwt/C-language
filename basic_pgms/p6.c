#include<stdio.h>
void main()
{	int c=0,num,r;
	printf("enter number:");
	scanf("%d",&num);

	for(;num;num=num/10)
	{	
		c++;
	}

	printf("%d",c);
}
