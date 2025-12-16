#include<stdio.h>
void main()
{
	int arr[5],e,i;
	e=sizeof(arr)/sizeof(arr[0]);

	printf("enter elements -:supports only even elements");
	for(i=0;i<e;)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
			i++;
	}

printf("\n=============================\n");
printf("even elements array");
	for(i=0;i<e;i++)
		printf("%d ",arr[i]);
}
