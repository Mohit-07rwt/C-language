#include<stdio.h>
void main()
{
	int arr[5],i,ele;
	ele=sizeof(arr)/sizeof arr[0];

	printf("enter elements:");
	for(i=0;i<ele;i++)
		scanf("%d",&arr[i]);


printf("array=");
	for(i=0;i<ele;i++)
		printf("%d ",arr[i]);





}
