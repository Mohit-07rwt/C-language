#include<stdio.h>
void main()
{
	int a,b;
	printf("enter a:");
	scanf("%d",&a);

	printf("enter b:");
	scanf("%d",&b);


	printf("(a+b)^2=%d",a*a*a+3*(a*a)*b+3*a*(b*b)+b*b*b);
}
