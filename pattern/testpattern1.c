#include<stdio.h>
void main()
{
	int i,j,k,n;
	char ch,chh;

	printf("enter row:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("*");
		}
		
		ch='A'+n-(i+1);

		for(k=0,chh=ch;k<n-i;k++,chh--)
		{
			printf("%c",chh);
			
		}
	printf("\n");
	}

}
