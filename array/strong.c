//wap printf strong no elements from an aaray;
#include<stdio.h>
void main()
{
	int a[6],sum=0,f=1,i,r,size,j,n;
	size=sizeof(a)/sizeof(a[0]);
	printf("enter elements:");

	for(i=0;i<size;i++)
		scanf("%d",&a[i]);

	for(i=0;i<size;i++)
	{
	//	printf("%d",a[i]);
		n=a[i];
		sum=0;
		for(;n;n=n/10)
		{
			r=n%10;
			f=1;
		
			for(j=1;j<=r;j++)
			{
				f=f*j;
			}

			sum=sum+f;	
		}
		if(a[i]==sum)
			printf("strong =%d ",a[i]);
	}

}
