#include<stdio.h>
void main()
{
	int i,j,k;
	char ch='P';

	for(i=0;i<4;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("   ");	
		}
		
		for(k=i,ch='P';k<7-i;k++,ch++)
			printf("  %c",ch);

	printf("\n");

	}

}
