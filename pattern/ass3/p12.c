#include<stdio.h>
void main()
{
	int i,j,k;
	char ch='E',c;
	

	for(i=0;i<5;i++,ch--)
	{
		for(j=2;j<=i+1;j++)
		{
			printf("*");
		}	

		for(k=0,c=ch;k<5-i;k++,c--)
		{	printf("%c",c);
			
		}	
	printf("\n");
	}





}
