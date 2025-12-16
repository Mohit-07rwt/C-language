//wap to swap 1st half and 2nd half ele in array
#include<stdio.h>
void main()
{
	int a[9],i,j,size,n;
	size=sizeof(a)/sizeof(a[0]);
	n=(size/2)-1;
	
	printf("enter elements:");

	for(i=0;i<size;i++)
		scanf("%d",&a[i]);

	for(i=n,j=size-1;i>=0; j--,i--)
		a[i]=a[i]+a[j]-(a[j]=a[i]);

	


printf("\n");
printf("after half reverse");
	for(i=0;i<size;i++)
		printf("%d  ",a[i]);


}
