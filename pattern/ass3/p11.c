#include<stdio.h>
void main()
{
	int i,j,c=5;
	for(i=0;i<5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(c==j)
			{
				printf("*");
				c--;
			}
			else
				printf("%d",j);

		}
	printf("\n");


	}


}
