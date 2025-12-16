#include<stdio.h>
void main()
{
	int i,j,k,n,num,nm;
	printf("enter row:");
	scanf("%d",&n);
	
	nm=n*4;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-(i+1);j++)
		{
			printf("*");
		}
		
		for(k=0,num=nm;k<=i;k++,num=num+i)
		{
			printf("%d ",num);
		}
		nm=nm-4;

	printf("\n");
	}
	
}
