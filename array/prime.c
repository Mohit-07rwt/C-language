//wap to rev elements of an array
#include<stdio.h>
void main()
{
	int a[6],i,j,size,c;
	size=sizeof(a)/sizeof(a[0]);
	printf("enter elements");

	for(i=0;i<size;i++)
		scanf("%d",&a[i]);

	
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
				break;
		}
		if(a[i]==j)
			c++;
	}
printf("count primes=%d",c);
}
