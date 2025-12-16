//wap in c to print sum of all elements in array 
#include<stdio.h>
int  sum(int a[],int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+a[i];

	}

	return sum;	
}




int  main()
{
	int a[5],size,i;
	size=sizeof(a)/sizeof(a[0]);

	printf("enter elements:");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);


	printf("sum of all elemt");

	int r=sum(a,size);
	printf("%d",r);


return 0;
}
