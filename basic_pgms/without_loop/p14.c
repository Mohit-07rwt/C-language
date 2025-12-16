#include<stdio.h>
void main()
{
        unsigned int num,r1,r2,r3,r4;
	printf("enter number:");
	scanf("%d",&num);

	r1=num<<27;
	r1=r1>>27;

	r2=num>>6;
 	r2=r2<<5;

	num=r1|r2;
	
	r3=num<<26;
	r3=r3>>26;

	r4=num>>7;
	r4=r4<<6;
	
	num=r3|r4;

	printf("%d",num);





}
