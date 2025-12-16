#include<stdio.h>
void main()
{
        unsigned int num,r1,r2;
	printf("enter number:");
	scanf("%d",&num);

	r1=num<<30;
	r1=r1>>30;

	r2=num>>3;
 	r2=r2<<2;

	num=r1|r2;
	printf("%d",num);

	int pos;
	for(pos=31;pos>=0;pos--)
		printf("%d",num>>pos&1);


}
