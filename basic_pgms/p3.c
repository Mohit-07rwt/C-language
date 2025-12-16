#include<stdio.h>
void main()
{	int sum=0,num,r;
	printf("enter number:");
	scanf("%d",&num);

	for(;num;num=num/10)
	{
		if ((num%10)>5)
			sum=sum+num%10;
	}

	printf("%d",sum);
}
