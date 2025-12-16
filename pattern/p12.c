#include<stdio.h>
void main()
{
	int i,j;	
	
	for(i=0;i<6;i++)
	{
		for(j=1;j<=11-2*i;j=j+2)
			if(i%2!=0)
				printf("%d",j);	
			else
				printf("*");

	printf("\n");
	}



}
