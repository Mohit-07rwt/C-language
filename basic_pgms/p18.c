#include<stdio.h>
void main()
{	int c=0,num,r,rev=0;
	printf("enter number:");
	scanf("%d",&num);

	l:
	r=num%10;
	rev=rev*10+r;
	num=num/10;
	c++;

	if (c<2)
	goto l;
	printf("%d",rev);
}
