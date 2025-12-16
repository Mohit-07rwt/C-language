#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=3;i++)
	{
		printf("     ");
		for(j=1;j<=i;j++)
			printf("%d",j);
		printf("\n");
	}

}
