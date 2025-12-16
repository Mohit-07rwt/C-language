#include<stdio.h>
void main()
{
	int i,j,k;
	char ch='Z';

	for(i=0;i<7;i=i+2)
	{
		for(j=0;j<7-i;j=j+2)
			printf("   ");

	
		for(k=0,ch='Z';k<=i;k++,ch--)	
		{
			printf("  %c",ch);
		}
	printf("\n");
	}
}
