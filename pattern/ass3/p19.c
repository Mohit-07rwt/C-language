#include<stdio.h>
void main()
{
	int i,j,k;
	char ch='Z';
	for(i=0;i<=5;i++)
	{
		for(j=5;j>=i;j--)
			printf("*");


		for(k=0,ch='Z';k<=i;k++,ch--)
			printf("%c",ch);

	printf("\n");
	}
}
