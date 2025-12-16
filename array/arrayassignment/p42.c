//42. WAP in C to shift all -ve elements to right side in same array	 i/p: int a[7]={-1,22,3,-4,-8,33,77};		o/p: int a[7]={22,3,33,77,-1,-4,-8,};

#include<stdio.h>

void shiftneg(int *,int);

void main()
{
	int n,i;
	printf("enter number of elements:");
	scanf("%d",&n);

	int a[n];

	printf("enter elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	shiftneg(a,n);

	printf(" shifting negative numbers: ");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	
}


void shiftneg(int *a,int n)
{
	int i,temp,j;
	for (i = 0, j = 0; i < n; i++)
	{
		if (a[i] >= 0)
		{
			if (i != j)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			j++;
		}
	}
}

