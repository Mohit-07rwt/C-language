//WAP in C to product of digit of all array elements.	i/p: int a[5]={11,202,234,456,90};	o/p: int a[5]={1, 0, 24, 120, 0};
#include<stdio.h>
void digitproduct(int *,int);

void main()
{
	int n,i;
	printf("enter number:");
	scanf("%d",&n);

	int a[n];
	printf("enter elements");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	digitproduct(a,n);
	
	printf("after:");

	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}



void digitproduct(int *a,int n)
{
	int r,p=1,i;
	for(i=0;i<n;i++)
	{
		p=1;
		for(;a[i];a[i]=a[i]/10)
		{
			r=a[i]%10;
			p=p*r;

		}

		a[i]=p;
	}
}
