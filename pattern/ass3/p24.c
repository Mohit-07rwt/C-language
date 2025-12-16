#include<stdio.h>
void main()
{
	int i,j,k;
	char ch='A';
	for(i=0;i<5;i++,ch++)

	{
		for(j=0;j<5-i;j++)
			printf("  ");
			
		for(k=0;k<=i;k++)
		{
			printf(" %c",ch);
		}
	printf("\n");
	}



}
