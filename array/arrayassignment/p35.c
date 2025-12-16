//35.WAP in C to print and count perfect in array .	i/p: int a[7]={3,4,5,6,7,28,9};			o/p: 6 28 , count= 2

#include<stdio.h>
void perfect(int *,int );

void main()
{
	int n,i;
	printf("enter number of element");
	scanf("%d",&n);
	
	int a[n];
	printf("enter elements");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("perfect elements from array\n");
	perfect(a,n);

}

void perfect(int *a,int n)
{
	int i,j,c=0,sum=0;
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=1;j<a[i];j++)	
		{
			if(a[i]%j==0)
			{
				sum=sum+j;
			}
		
		}

		if(a[i]==sum)
		{
			printf("%d ",a[i]);
			c++;
		}
	}
	printf("count=%d",c);
}





