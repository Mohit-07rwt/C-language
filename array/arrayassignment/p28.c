//28. WAP in C to delete -ve elements from array .      i/p: int a[6]={-11,12,-14,13,-15,-18};	o/p: int a[6]={12, 13};

#include<stdio.h>

int delete_negative(int[],int);
int delete_positive(int[],int);

void main()
{
	int i,n,ch;
	printf("enter number of elements you want to enter:");
	scanf("%d",&n);

	int a[n];
	printf("enter elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);


	printf("enter your choice 1=delete negative \n 2=delete positive :");
	scanf("%d",&ch);

	if(ch==1)
	{	
		n=delete_negative(a,n);
		printf("after deleting negative");
	}

	if(ch==0)
	{
		n=delete_positive(a,n);
		printf("after deleting positive:");

	}

	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	
}


int delete_negative(int a[],int n)
{
	int i,j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			a[j]=a[i];
			j++;
		}
	}
	return j;	
}




int delete_positive(int a[],int n)
{
	int i,j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			a[j]=a[i];
			j++;
		}
	}
	return j;
}
