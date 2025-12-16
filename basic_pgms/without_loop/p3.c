#include<stdio.h>
void main()
{
	int a,r;
	printf("enter a:");
	scanf("%d",&a);

	r=a%10;
	a=a/10;

	printf("%d",(r*10)+a);
}
