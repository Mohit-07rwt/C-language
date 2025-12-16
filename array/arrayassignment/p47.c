//47. WAP in C to delete perfect number from array .	i/p: int a[6]={6,6,7,28,6,5,24};	o/p: int a[6]={7,5,24};

#include<stdio.h>
int delperfect(int *,int);
void main()
{
	int i,n;
	printf("enter number of elment you want");
	scanf("%d",&n);

	int a[n];
	printf("enter elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);


	n=delperfect(a,n);
	printf("after deleting perfect number from the array:");

	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}

int delperfect(int *a,int n)
{
	int i,j,sum=0,c=0;
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
				sum=sum+j;
		}
		
		if(sum==a[i])
		{
			continue;
		}
		else
		{
			a[c]=a[i];
			c++;
		}
	}
	return c;
}

