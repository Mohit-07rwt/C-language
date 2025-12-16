#include<stdio.h>
void main()
{
	int a[5],i,t=0,j;
	printf("enter ele:");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);

	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i-1;j++)

		if(a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;

		}
	}

	for(i=0;i<5;i++)	
		printf("%d ",a[i]);

}
