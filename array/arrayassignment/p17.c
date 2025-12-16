//17. WAP in C to sort 1st 3 element of array .		i/p: int a[7]={11,33,22,2,9,1,6};	o/p: 11 22 33 2 9 1 6

#include<stdio.h>
void sort(int a[],int size)
{
	for(int i=0;i<2;i++)
	{
		for(int j=i+1;j<3;j++)
			{
				if(a[j]<a[i])
					a[j]^=a[i]^=a[j]^=a[i];
			}
	}
}

void main()
{
	int n,size,i;
	printf("enter number of elements you want to enter:");
	scanf("%d",&n);
		
	int a[n];
	size=sizeof(a)/sizeof(a[0]);

	printf("enter elements");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);


	printf("before sorting :");
	for(i=0;i<size;i++)
		printf("%d ",a[i]);
	

	sort(a,size);

	printf("after sorting :");
	for(i=0;i<size;i++)
		printf("%d ",a[i]);
	
}
