#include<stdio.h>
struct a
{
	union b
	{
		int i;
		char ch[5];
	}B;
	
	struct c
	{
		long int *p;	
		char j;
	}C;

	union d
	{
		double k;
	}D;
}A;

void main()
{

	printf("%ld\n",sizeof(A.B));
	printf("%ld\n",sizeof(A.D));
}
