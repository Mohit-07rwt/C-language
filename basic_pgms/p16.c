#include<stdio.h>
void main()
{	int rev=0,num,r;
	printf("enter number:");
	scanf("%d",&num);

	l:
	r=num%10;
	rev=rev*10+r;
	num=num/10;

	if (num)
	goto l;
	printf("%d",rev);
}
