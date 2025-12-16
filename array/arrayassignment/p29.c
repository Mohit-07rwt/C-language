//WAP in C to delete duplicate elements from array .	i/p: a[10]={3,3,2,4,4,1,2,3,7,9}		o/p: a[10]={3,2,4,1,7,9};

#include<stdio.h>
int del_dublicate(int *,int);

void main()
{
	int n,i;
	printf("enter number of elements you want to enter :");
	scanf("%d",&n);

	int a[n];
	printf("enter elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	
	printf("after deleting dublicate elements:");

	n=del_dublicate(a,n);
	
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}


int del_dublicate(int *a,int n)
{
	int i,j=0,k,c=0;
	for(i=0;i<n;i++)
	{
		c=0;
		for(k=0;k<=i;k++)
		{
			if(a[i]==a[k])
			{
				c++;	
			}
		}
	
		if(c==1)	
		{
			a[j]=a[i];
			j++;
		}
		
	}
	return j;
}
