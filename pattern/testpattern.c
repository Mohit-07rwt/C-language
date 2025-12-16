#include<stdio.h>
void main()
{
	int i,j,k,n;
	char ch,chh;
	printf("enter rows:");
	scanf("%d",&n);
		
	chh='T';
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
			printf("*");
	

		chh='T'-i;

		for(k=0,ch=chh;k<n-i;k++)
		{
			printf("%c",ch);

			if(i%2==0)
				
				ch=ch-2;	
	
			else
				ch=ch-3;
		}

	
	printf("\n");

	}
}
