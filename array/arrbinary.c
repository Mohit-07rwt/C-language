//wap to print binary of elements ;
#include<stdio.h>
void main()
{
	int arr[5],i,size,pos;
	size=sizeof(arr)/sizeof(arr[0]);
	
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);

	for(i=0;i<size;i++)
	{
		printf("%d:",arr[i]);
		for(pos=31;pos>=0;pos--)
		{
			printf("%d",arr[i]>>pos&1);
			if(pos%8==0)
				printf(" ");
		}
	printf("\n=============================\n");
	}
}
