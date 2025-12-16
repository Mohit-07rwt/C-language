#include<stdio.h>
void main()
{
	int i,j,d=0,k=16;
	for(i=0;i<6;i++)
	{
		d=0;
		for(j=1;j<=k;j=j+d)
		{
			printf(" %d ",j);
			d++;
			
		}
		printf("\n");
		k=k-(5-i);

	}




}
