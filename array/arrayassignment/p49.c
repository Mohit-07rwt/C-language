//WAP in C to store prime index ele in another array.		i/p: int a[8]={11,22,33,44,55,66,77,88};		o/p: int b[8]={33,44,66,88};
#include<stdio.h>
int primeindx(int *,int *,int);
void main()
{
	int i,n,c=0;
	printf("enter number of elment you want");
	scanf("%d",&n);

	int a[n],b[n];
	printf("enter elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);


	c=primeindx(a,b,n);
	printf("after replace prime index from the array:");

	for(i=0;i<c;i++)
		printf("%d ",b[i]);
}

int primeindx(int *a,int *b,int n)
{
	int i,j,c=0;
	for(i=0;i<n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		
		if(j==i)
		{
			b[c]=a[i];
			c++;
		}
		else
			continue;
	}
	return c;
}
