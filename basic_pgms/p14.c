#include<stdio.h>
void main()
{	int c=0,sum=0,num,r;
	printf("enter number:");
	scanf("%d",&num);

	l:
	r=num%10;
	printf("%d",r);
	c++;	
	num=num/10;

	if (c<3)
	goto l;
}
