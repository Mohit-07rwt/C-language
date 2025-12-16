//46.WAP in C to store 1st 7 prime number in array .	i/p: int a[7];		o/p: int a[7]={2,3,5,7,11,13,17};
#include<stdio.h>
void prime7(int *,int);
void main()
{
	int i,n;
	printf("enter number of prime elment you want");
	scanf("%d",&n);

	int a[n];
	prime7(a,n);
	printf("prime elemetns");
		
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);

}

void prime7(int *a,int n)
{
	int i,j,c=0;

	for(i=2;c<n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		
		if(j==i)
		{
			a[c]=j;
			c++;
		}
		if(c==n)
			break;
	}
}

