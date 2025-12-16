#include<stdio.h>
void main()
{
	int a,r;
	printf("enter a:");
	scanf("%d",&a);

	a=(a/10)/10;

	printf("%d",a);
}
