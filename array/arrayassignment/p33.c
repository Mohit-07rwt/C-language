//WAP in C to store factorial of array in another array.	i/p: int a[4]={ 4, 5, 6, 4};	o/p: int b[4]={24,120,720,24}

#include<stdio.h>
void factorial(int *,int *,int);

void main()
{
	int n,i;
	printf("enter number of element");
	scanf("%d",&n);
	
	int a[n],b[n];
	printf("enter elements");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	
	factorial(a,b,n);
	
	printf("factorial=  ");
	for(i=0;i<n;i++)
		printf("%d ",b[i]);

}

void factorial(int a[],int b[],int n)
{
	int i,f=1,j;
	for(i=0;i<n;i++)
	{
		f=1;
		for(j=1;j<=a[i];j++)
		{
			f=f*j;

		}
		b[i]=f;
	}		

}
