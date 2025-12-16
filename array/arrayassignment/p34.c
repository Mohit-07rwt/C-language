//wap to print and count prime in array .	i/p: int a[7]={3,4,5,6,7,8,9};		 o/p: 3 5 7 , count= 3

#include<stdio.h>
void prime(int *,int );

void main()
{
	int n,i;
	printf("enter number of element");
	scanf("%d",&n);
	
	int a[n];
	printf("enter elements");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("prime elements from array\n");
	prime(a,n);

}

void prime(int *a,int n)
{
	int i,j,c=0;
	for(i=0;i<n;i++)
	{
		for(j=2;j<a[i];j++)	
		{
			if(a[i]%j==0)
				break;
		}
		if(a[i]==j)
		{
			printf("%d ",a[i]);
			c++;
		}
	}
	printf("count =%d",c);
}
