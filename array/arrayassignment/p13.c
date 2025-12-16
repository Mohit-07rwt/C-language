//WAP in C to print second largest element in array.     i/p : int a[7]={2,2,3,5,5,4,4};           o/p : second large = 4

#include<stdio.h>
int min(int *a,int size)
{
	int l=0,sl=0;
	for(int i=0;i<size;i++)
	{
		if (*(a+i)>l)
		{
			sl=l;
			l= *(a+i);
		}
		else if( *(a+i)>sl && *(a+i)!=l)
			sl=*(a+i);
			
	}
	return sl; 
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

//	min(a,size);
	
	printf("%d  ",min(a,size));
}	
