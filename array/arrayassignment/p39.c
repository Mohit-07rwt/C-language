//wap to rotate array 3 times in same array.	i/p: int a[7]={11,21,31,41,51,61,71};	o/p: int a[7]={51,61,71,11,21,31,41}
#include<stdio.h>
void rotate(int *,int);

void main()
{
	int n,i;
	printf("enter number of elements:");
	scanf("%d",&n);

	int a[n];

	printf("enter elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	rotate(a,n);

	printf("after rotate: ");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	
}


void rotate(int *a,int n)
{

	int i,j,b,k;
	for(k=0;k<3;k++)
	{
		b=a[n-1];
		for(i=n-1;i>0;i--)
		{
			a[i]=a[i-1];
		}
		a[0]=b;
	}
}
