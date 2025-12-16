#include<stdio.h>
void main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);

	num=(num&~(1<<3)) & (num&~(1<<2));
	
	printf("%d",num);



}
