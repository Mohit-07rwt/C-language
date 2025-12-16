//43 .WAP in C to shift all odd elements to right side  in same array.	i/p: int a[7]={11,22,22,44,55,33,88};		o/p: int a[7]={22,22,44,88,11,55,33};

#include<stdio.h>

void shiftodd(int *,int);

void main()
{
	int n,i;
	printf("enter number of elements:");
	scanf("%d",&n);

	int a[n];

	printf("enter elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	shiftodd(a,n);

	printf(" shifting odd numbers: ");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	
}


void shiftodd(int *a,int n)
{
	int i,t,j=0;
		
		for(i=0;i<n;i++)
		{
			if(a[i]%2==0)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
				
				j++;

			}
		}
}
