//23. WAP in C to merge 2 array into 3rd array .         i/p: int a[2]={1,5}; b[4]={11,22,33,44};                   o/p: int c[6]={1,11,5,22,33,44};

#include<stdio.h>
void merge(int a[],int b[],int c[],int n,int n1)
{
	int i,x=0,j;
	for(i=0;i<(n+n1);i++)
	{
		if(i<n)
		{
			c[x]=a[i];
			c[x+1]=b[i];
			x=x+2;
		}

		else
		{
			c[x]=b[i];
			x++;	
		}
	}
}


void main()
{
	int i,size,n,n1,n3;
	printf("enter number of elements");
	scanf("%d",&n);
	
	printf("enter number of elements");
	scanf("%d",&n1);

	n3=n+n1;
	int a[n],b[n1],c[n3];

	printf("enter elemnts of a\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	printf("enter elemnts of b\n");
	for(i=0;i<n1;i++)
	scanf("%d",&b[i]);

	
	merge(a,b,c,n,n1);

	printf("after merge:\n");
	for(i=0;i<n3;i++)
		printf("%d ",c[i]);
}
