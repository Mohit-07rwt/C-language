//WAP in C to print and count armstrong in array 	 i/p: int a[7]={22,4,21,6,153,28,11};	 o/p: 4 6 153 ,count= 3 
 
#include<stdio.h>
void armstrong(int *,int );

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
	armstrong(a,n);

}

void armstrong(int *a,int n)
{
	int i,j,c=0,sum=0,f=1,r,t=0,l=0;
	for(i=0;i<n;i++)
	{
		//if(a[i]<10)
		//	printf("%d ",a[i]);
		sum=0,l=0;
		t=a[i];
		for(;t;t=t/10)
			l++;

		t=a[i];

		for(;t;t=t/10)	
		{
			f=1;
			r=t%10;
			for(j=1;j<=l;j++)
			{
				f=f*r;
			}
			sum=sum+f;
		}

		if(a[i]==sum)
		{
			printf("%d ",a[i]);
			c++;
		}
	}
	printf("count=%d\n",c);
}
