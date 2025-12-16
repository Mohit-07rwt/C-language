//16. WAP in C to swap(using bitwise) 0th ele with last ele in array using 2 pointer without any loop. 		i/p: int a[6]={111,222,333,444,555,666}, *p,*q ;	o/p: 666 222 333 444 555 111

#include<stdio.h>
void swap(int a[],int size)
{	
	int *l,*r;
	l=a;
	r=a+size-1;
	//a[0]=a[0]^a[size-1];
	//a[size-1]=a[0]^a[size-1];
	//a[0]=a[0]^a[size-1];

	*l^=*r^=*l^=*r;

//	*(a+0)^=*(a+size-1)^=*(a+0)^=*(a+size-1);
}





void main()
{
	int size,n,i;
	printf("enter elements number:");
	scanf("%d",&n);

	int a[n];
	size=sizeof(a)/sizeof(a[0]);
	
	printf("enter elements:");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);

	printf("before swap 0th ele with last ele:");
	for(i=0;i<size;i++)
		printf("%d ",a[i]);


	printf("\n");

	swap(a,size);	
	printf("after swap 0th ele with last ele:");
	for(i=0;i<size;i++)
		printf("%d ",a[i]);


}
