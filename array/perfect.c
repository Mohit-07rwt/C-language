//wap to rev elements of an array
#include<stdio.h>
void main()
{
	int a[6],i,j,size,b[6],k=0,sum=0;
	size=sizeof(a)/sizeof(a[0]);
	printf("enter elements");

	for(i=0;i<size;i++)
		scanf("%d",&a[i]);

	
	for(i=0;i<size;i++)
	{
		sum=0;
		printf("%d",a[i]);
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
				sum=sum+j;
		}
		if(a[i]==sum)
		{
			b[k]=sum;
			k++;
		}
	}
printf("=====================");
printf("prfect =");
	for(i=0;i<k;i++)
		printf("%d ",b[i]);
}
