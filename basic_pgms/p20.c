#include<stdio.h>
void main()
{	int num,r,rev=0;
	printf("enter number:");
	scanf("%d",&num);

	l:
	r=num%10;
	if(r>4 && r<8)
		rev=rev*10+r;
	num=num/10;

	if (num)
	goto l;
	printf("%d",rev);
}
