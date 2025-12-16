#include<stdio.h>
void main()
{
	int i,j,d=1,k=1;

	for(i=1;i<=5;i++)
	{
		d=1;
		k=1;
		for(j=1;j<=i+1;j++)
		{	
			if(j>2)
			{
				printf(" %d ",j+k);
				k=(k+1)+d;
				d++;
			}
			else
				printf(" %d ",j);
		}
		printf("\n");
	}
}
