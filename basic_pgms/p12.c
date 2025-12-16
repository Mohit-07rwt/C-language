#include<stdio.h>
void main()
{	int c=0,sum=0,num,r;
	printf("enter number:");
	scanf("%d",&num);

	l:
	r=num%10;
	sum=sum+r;
	num=num/10;
	c++;	

	if (c<3)
	goto l;

	printf("%d",sum);
}
