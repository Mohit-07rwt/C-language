#include<stdio.h>
void main()
{	int c=0,sum=0,num,r;
	printf("enter number:");
	scanf("%d",&num);

/*

	l:
	r=num%10;
	num=num/10;
	if (num)
	goto l;
	printf("r=%d\n",r);
*/			
	for(;num;num=num/10);
		printf("%d",num);
}
