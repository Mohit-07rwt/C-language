// 14.WAP in C to print second smallest element in array.   /p : int a[7]={2,2,1,5,5,4,4};       o/p : second small = 2

#include<stdio.h>
int min(int *a,int size)
{

	int l,sl;
	if(*(a+0) < *(a+1))
	{
		l=*(a+0);
		sl=*(a+1);

	}

	else
	{	
		l=*(a+1);
		sl=*(a+0);
		
	}
	
	for(int i=0;i<size;i++)
	{
		if (*(a+i)<l)
		{
			sl=l;
			l= *(a+i);
		}
		else if( *(a+i)<sl && *(a+i)!=l)
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
