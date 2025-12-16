//WAP in C to store set bit count to another array.       i/p:int a[5]={10,15,64,100,511};          o/p: int b[5]={2 , 4, 1, 3, 9 };
#include<stdio.h>
void count(int a[],int size,int b[])
{
	for(int i=0;i<size;i++)
	{
		int c=0;
		for(int pos=31;pos>=0;pos--)
		{
			if(a[i]>>pos&1==1)
				c++;
		}
		b[i]=c;
	}

}






void main()
{

	int n,i,size;
	printf("enter size of array:");
	scanf("%d",&n);
	int a[n],b[n];
	size=sizeof(a)/sizeof(a[i]);
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);

	printf("count array");

	count(a,size,b);
	for(i=0;i<size;i++)
		printf("%d ",b[i]);
	
}
