#include<stdio.h>
void main()
{
	unsigned int num,p1,p2,r1,r2,r3,r4;
	printf("enter number:");
	scanf("%d",&num);

	r1=num<<(31-5);
	r1=r1>>(31-5);

	r2=num>>(5+1);
	r2=r2<<5;

	num=r1|r2;

	r3=num<<(31-6);
	r3=r3>>(31-6);

	r4=num>>(6+1);
	r4=r4<<6;

	num=r3|r4;
		
	printf("    %d",num);

}
