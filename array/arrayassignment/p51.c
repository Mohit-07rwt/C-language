//51. WAP in C to delete odd palindrome number from array .	i/p: int a[6]={22,141,222,45,33,77};	o/p: int a[6]={22,222,45};

#include<stdio.h>

void deleteoddpallindrome(int *,int,int *);
void main()
{
	int n,i,c;
	printf("enter number of elements you want");
	scanf("%d",&n);
	
	int a[n];
	printf("enter elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	deleteoddpallindrome(a,n,&c);
	printf("after deleting ");

	for(i=0;i<c;i++)
		printf("%d ",a[i]);
}

void deleteoddpallindrome(int *a,int n,int *c)
{
	int i,j,sum,f=1,r,rev=0,t=0;
	*c=0;
	for(i=0;i<n;i++)
	{
		rev=0;
		t=a[i];
		for(;t;t=t/10)
		{
			r=t%10;
			rev=rev*10+r;
		}

		if(rev==a[i] && rev%2==0)
		{
			a[*c]=a[i];
			(*c)++;
		}
		else
			continue;
	}
}
