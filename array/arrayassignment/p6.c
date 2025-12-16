//6.WAP in C to delete 1st digit of all array elements.  i/p: int a[6]={12,234,321,45,654,1234};    o/p: int a[6]={2 , 34, 21, 5, 54, 234};

#include<stdio.h>
void del(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		int n=a[i],c=1;
		{
			while(n>=10)
			{
				c=c*10;
				n=n/10;
			}

		a[i]=a[i]%c;
		}
		
	}



}


void main()
{
	int a[5],size,i;
	size=sizeof(a)/sizeof(a[0]);
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);


	del(a,size);

	for(i=0;i<size;i++)
		printf("%d ",a[i]);

}

