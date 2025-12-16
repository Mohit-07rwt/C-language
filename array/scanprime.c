#include<stdio.h>
void main()
{
	int i,size,arr[5],a=0;

	size=sizeof(arr)/sizeof(arr[0]);

	printf("enter elements:");
	for(i=0;i<size;)
	{
		scanf("%d",&arr[i]);
		
		for(a=2;a<arr[i];a++)
		{
			if(arr[i]%a==0)
				break;
		}
				
		if(arr[i]==a)
			i++;
	}

	
printf("prime elements\n");
printf("\n====================\n");


	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	
}
