//8.WAP in C to delete 0th bit of all array elements.       i/p: int a[5]={12,10,35,63,512};       o/p: int a[5]={ 6, 5,17,31,256};
#include<stdio.h>
void delete(int a[],int size)
{
	int *p;
	for(int i=0;i<size;i++)
	{
		a[i]=a[i]>>1;
	}

}
void main()
{
	int a[5],size,i;
	size=sizeof(a)/sizeof(a[i]);
	printf("enter ele");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);


	printf("array afetr deletinf 0th bit");
	delete(a,size);
	
	for(i=0;i<size;i++)
		printf("%d ",a[i]);
}
