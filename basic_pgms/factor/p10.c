#include<stdio.h>
void main()
{
	int num,sum=0;
	printf("enter number:");
	scanf("%d",&num);
	
	for(;num;num=num/10)
		sum=sum+num%10;	

	
printf("sum of digits=%d",sum);
}
