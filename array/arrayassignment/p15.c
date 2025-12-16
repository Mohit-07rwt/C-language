//15.c-> WAP in C to swap 3rd ele with 4th ele in array .     i/p: int a[6]={11,22,33,44,55,66};         o/p: 11 22 33 55 44, 66
#include<stdio.h>
void swap(int *a,int size)
{
	for(int i=0;i<size;i++)
	{
		if(i==3)
		{
			int t=*(a+i);
			*(a+i)=*(a+i+1);
			*(a+i+1)=t;

		}
	}
}


void main()
{
	int n,i,size;
	printf("enter size");
	scanf("%d",&n);
	
	int a[n];
	size=sizeof(a)/sizeof(a[0]);

	for(i=0;i<size;i++)
		scanf("%d",&a[i]);


	swap(a,size);

	for(i=0;i<size;i++)
		printf("%d  ",a[i]);



}



