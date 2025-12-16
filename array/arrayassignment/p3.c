#include<stdio.h>
void sort(int a[],int size)
{
	size=size-2;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}

		}
	
	}
}





void main()
{
	int a[7],i,size;
	size=sizeof(a)/sizeof(a[0]);
	
	printf("enter elements;");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);



	sort(a,size);
	printf("sorted array=");
	for(i=0;i<size;i++)
		printf("%d ",a[i]);
	
}
