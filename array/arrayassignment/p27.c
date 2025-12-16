//WAP in C to delete odd elements from array .	i/p: int a[7]={11,12,14,13,15,18};	o/p: int a[6]={12,14,18};

#include<stdio.h>
int delete_even(int[],int);
int delete_odd(int[],int);
void main()
{	
	int n,i,ch;
	printf("enter number of elements you want to enter:");
	scanf("%d",&n);

	int a[n];

	printf("enter elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("delete even=1 or odd=0:");
	scanf("%d",&ch);

	if(ch==1)
	{
		n=delete_even(a,n);
		printf("after deleting even: ");	
	}
	if(ch==0)
	{
		n=delete_odd(a,n);
		printf("after deleting odd: ");
	}

	for(i=0;i<n;i++)
		printf("%d ",a[i]);



}

int delete_even(int a[],int n)
{
	int i,j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			a[j]=a[i];
			j++;
		}
	}
	return j;
}



int delete_odd(int a[],int n)
{
	int i,j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			a[j]=a[i];
			j++;
		}
	}
	return j;
}
