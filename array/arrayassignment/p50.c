//50. WAP in C to delete all strong num from array .	i/p: int a[6]={2,145,2,14,3,2};		o/p: int a[6]={14,3};
#include<stdio.h>

void deletestrong(int *,int,int *);
void main()
{
	int n,i,c;
	printf("enter number of elements you want");
	scanf("%d",&n);
	
	int a[n];
	printf("enter elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	deletestrong(a,n,&c);
	printf("after deleting ");

	for(i=0;i<c;i++)
		printf("%d ",a[i]);
}

void deletestrong(int *a,int n,int *c)
{
	int i,j,sum,f=1,r,t=0;
	*c=0;
	for(i=0;i<n;i++)
	{
		sum=0;
		t=a[i];
		for(;t;t=t/10)
		{
			r=t%10;
			f=1;
			for(j=1;j<=r;j++)
			{
				f=f*j;	
			}
			sum=sum+f;
		}
		if(sum==a[i])
			continue;
		else
		{
			a[*c]=a[i];
			(*c)++;
		}	
	}
}
