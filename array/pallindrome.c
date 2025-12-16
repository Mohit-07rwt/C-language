//wap to pallindrome elements of an array
#include<stdio.h>
void main()
{
	int a[6],i,b[6],size,r,rev=0,k=0,n;
	
	size=sizeof(a)/sizeof(a[0]);
	printf("enter elements\n");

	for(i=0;i<size;i++)
		scanf("%d",&a[i]);

	
	for(i=0;i<size;i++)
	{
		rev=0;
		n=a[i];
//		printf("%d ",a[i]);

		for( ;a[i];a[i]=a[i]/10)
		{
			r=a[i]%10;
			rev=rev*10+r;
		}

		if(n==rev)
		{
			b[k]=rev;
			k++;
	//		printf("%d",b[k]);
		}
	}

printf("=====================\n");
printf("pallindrome = ");
	
	for(i=0;i<k;i++)
		printf("%d ",b[i]);

}
