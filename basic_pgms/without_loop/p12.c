#include<stdio.h>
void main()
{
	int num,r1,r2;
	printf("enter number:");
	scanf("%d",&num);

	r1=(num<<31);
	r1=num>>31;

	r2=num>>1;
 	r2=r2<<0;

	num=r1|r2;
	printf("%d",num);



}
