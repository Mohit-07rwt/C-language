#include<stdio.h>
void main()
{	int c=0,num,r;
	printf("enter number:");
	scanf("%d",&num);

	for(;num;num=num/10)
	{
		if ((num%10)%2!=0)
			c++;
	}

	printf("%d",c);
}
