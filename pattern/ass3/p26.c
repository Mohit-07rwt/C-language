#include<stdio.h>
void main()
{
	int i,j,k=1,l,d;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
			printf("*");
		
		for(k=1,d=i+1;k<=i+1;k++,d++)
			printf("%d",d);
			
		for(l=1,d=d-2;l<=i;l++,d--)
			printf("%d",d);
	printf("\n");
	}


}

