//30 WAP in C to delete even duplicate ele from array.		i/p: a[10]={3,3,2,4,4,2,5,3,4,9}	o/p: a[10]={3,3,2,4,5,3,9};

#include<stdio.h>
int delete_even_dublicate(int *,int);
void main()
{
	int n,i;
	printf("enter number of elements you want:");
	scanf("%d",&n);

	int a[n];
	
	printf("enter elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);


	printf("after deleting dublicate even elements");
		
	n=delete_even_dublicate(a,n);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}

int delete_even_dublicate(int *a,int n)
{
	int i,j=0,k,c=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			c=0;
			for(k=0;k<=i;k++)
			{
				if(a[k]==a[i])
					c++;
			}
			
			if(c==1)
			{	
				a[j]=a[i];
				j++;				
			}
		}

		else
			{
			
				a[j]=a[i];
				j++;				
			}
	}
	return j;
}
