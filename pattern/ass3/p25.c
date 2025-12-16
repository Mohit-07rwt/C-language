#include<stdio.h>
void main()
{
	int i,j,k;	
	char ch='F';

	for(i=0;i<6;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}

		for(k=i,ch='F'-i;k<6;k++,ch--)
			printf(" %c",ch);

	printf("\n");		
	}




}
