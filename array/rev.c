//wap to rev elements of an array
#include<stdio.h>
void main()
{
	int a[6],i,j,size;
	size=sizeof(a)/sizeof(a[0]);
	printf("enter elements");
	
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);

	for(i=0;i<size;i++)
		printf("%d",a[i]);

printf("\n");

	for(i=0,j=size-1;i<j;i++,j--)
		
		a[i]=a[i]+a[j]-(a[j]=a[i]);
		

printf("reverse");
	for(i=0;i<size;i++)
		printf("%d",a[i]);
}
