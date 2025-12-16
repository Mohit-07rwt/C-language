//wap to print 1st perfect and pos form array .	 i/p: int a[5]={2,4,6,28,6};	o/p: num= 6, pos= 2
#include<stdio.h>

void perfectpos(int *,int);
void main()
{
	int i,n;
	printf("enter number of elment you want");
	scanf("%d",&n);

	int a[n];
	printf("enter elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);


	perfectpos(a,n);
}

void perfectpos(int *a,int n)
{
	int i,j,sum=0;
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
				sum=sum+j;
		}
		
		if(sum==a[i])
		{
			printf("   a[i]=%d    i=%d\n",a[i],i);
			break;	
		}
		
	//	if(c==1)
	//		break;
	}
}

