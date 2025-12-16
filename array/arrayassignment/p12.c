//13. WAP in C to print Smallest element in array.    i/p : int a[6]={2,2,3,5,5,4};         o/p : res = 2
#include<stdio.h>
int min(int a[],int size)
{
	int min=a[0];
	for(int i=0;i<size;i++)
	{
		if(a[i+1]<min)
			min=a[i];
	}
	return min;
}	



void main()
{
	int n,i,size;
	printf("enter size;");
	scanf("%d",&n);
	int a[n];
	size=sizeof(a)/sizeof(a[0]);
	
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);


	printf("\n");
	printf("smallest element in array");
//	min(a,size);
	
	printf("%d  ",min(a,size));
}	
