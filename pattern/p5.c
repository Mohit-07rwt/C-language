#include<stdio.h>
void main()
{
	int i,j;
	for(i=3;i>=0;i--)
	{
		for(j=1;j<=i;j++)
			printf("%d",j);
		printf("\n");
	}

}
