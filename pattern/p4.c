#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<=5;i=i+2)
	{
		for(j=4;j>=i;j--)
			printf("*");
		printf("\n");
	}

}
