#include<stdio.h>
void main()
{
	int num,r;
	printf("enter number:");
	scanf("%d",&num);

	num=num/10;
	r=num%10;

	printf("%d",r);

}
