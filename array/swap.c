//wap to swap adjacent elements in an array
#include<stdio.h>
void main()
{
	int i,a[6],size,j,t=0;
	size=sizeof(a)/sizeof(a[0]);

	printf("enter elements:");

	for(i=0;i<size;i++)
		scanf("%d",&a[i]);

	for(i=0;i<size;i++)
		printf("%d",a[i]);

	printf("\n");

	for(i=0,j=1;i<size;i=i+2,j=j+2)
	{
		//t=a[i];
		//a[i]=a[j];
		//a[j]=t;
		
		a[i]=a[i]+a[j]-(a[j]=a[i]);
	}

printf("after swapping\n");	
	
	for(i=0;i<size;i++)
		printf("%d ",a[i]);
}

