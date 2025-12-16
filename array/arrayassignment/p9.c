//9.WAP in C to count all set and clear bit array . i/p: int a[5]={10,15,64,100,511};  o/p: set count =19 , clear count=141
#include<stdio.h>
void bitcount(int a[],int size)
{
	int b=0,c=0;
	for(int i=0;i<size;i++)
	{
		for(int pos=31;pos>=0;pos--)
		{
			if((a[i]>>pos)&1==1)
				c++;
			else
				b++;
		}
	}
	printf("set count=%d",c);
	printf("clear bit=%d",b);

}
void main()
{
	int n,size,i;
	printf("enter total no of ele:");
	scanf("%d",&n);

	int a[n];

	size=sizeof(a)/sizeof(a[0]);
	printf("enter elements");

	for(i=0;i<size;i++)
		scanf("%d",&a[i]);

	bitcount(a,size);

}
