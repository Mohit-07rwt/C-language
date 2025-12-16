#include<stdio.h>
void main()
{
	int a;
	printf("enter a:");
	scanf("%d",&a);

	printf("%d",(a%10)+(a/10));
}
