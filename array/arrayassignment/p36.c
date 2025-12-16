//36. WAP in C to print and count strong in array .	 i/p: int a[7]={2,4,2,6,145,28,1};	 o/p: 2 2 145 1 ,count= 4 

#include<stdio.h>
void strong(int *,int );

void main()
{
	int n,i;
	printf("enter number of element");
	scanf("%d",&n);
	
	int a[n];
	printf("enter elements");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("strong elements from array\n");
	strong(a,n);

}

void strong(int *a,int n)
{
	int i,j,c=0,sum=0,f=1,r,t=0;
	for(i=0;i<n;i++)
	{
		sum=0;
		t=a[i];
		for(;t;t=t/10)	
		{
			f=1;
			r=t%10;
			for(j=1;j<=r;j++)
			{
				f=f*j;
			}
			sum=sum+f;
		}

		if(a[i]==sum)
		{
			printf("%d ",a[i]);
			c++;
		}
	}
	printf("count=%d",c);
}
