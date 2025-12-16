//7.WAP in C to print binary of all elemets in array . i/p: int a[5]={10,100,1000,100,10}

#include<stdio.h>
void binary(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d=",a[i]);
		int num=a[i];
		for(int pos=31;pos>=0;pos--)
		{
			printf("%d",num>>pos&1);
			if(pos%8==0)
				printf(" ");

		}
		printf("\n");

	}
}



void main()
{
	int a[5],size,i;
	size=sizeof(a)/sizeof(a[0]);
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);

	binary(a,size);
	printf("binary");


}
