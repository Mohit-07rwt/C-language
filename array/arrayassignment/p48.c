//WAP in C to replace prime index ele with 0 in array.	i/p: int a[8]={11,22,33,44,55,66,77,88};	o/p: int a[8]={11,22,0 ,0 ,55,0 ,77,0 };

#include<stdio.h>
int primeindx(int *,int);
void main()
{
	int i,n;
	printf("enter number of elment you want");
	scanf("%d",&n);

	int a[n];
	printf("enter elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);


	primeindx(a,n);
	printf("after replace prime index from the array:");

	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}

int primeindx(int *a,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		
		if(j==i)
		{
			a[i]=0;
		}
		else
			continue;
	}
}
