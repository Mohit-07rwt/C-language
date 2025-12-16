#include<stdio.h>
void main()
{
	int num,r,sum=0,a;
	printf("enter number::");
	scanf("%d",&num);
	
	r=num%10;
	for(;num;num=num/10)
	{
		a=num%10;
	}	
		
printf("%d",a+r);

}
