#include<stdio.h>
void main()
{
	int i,j,k;
	char ch='E',c;
//	c=ch;
	
	for(i=1;i<=5;i++,ch--)
	{
		for(j=1;j<=5-i;j++)
		{
			printf(" * ");
		}
		
		for(k=1,c=ch;k<i+1;k++,c++)
		{	
			if(i%2==0)
				printf(" %d ",k);
			else
			{
				printf(" %c ",c);
				//c--;
			}
		
		}
		printf("\n");
	}
	
}
