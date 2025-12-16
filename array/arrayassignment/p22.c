//WAP in C to merge 2 array into 3rd array .       i/p: int a[3]={1,5,7}; b[3]={11,22,33};	o/p: int c[6]={1,11,5,22,7,33};
#include<stdio.h>
void merge(int a[],int b[],int c[],int la)
{
	int i,j,x=0;
	for(i=0;i<la;i++,x=x+2)
	{
			c[x]=a[i];
        		c[x+1]=b[i];	
	}




}
void main()
{
	int n,n2,la,lb,lc,i;
	printf("enter number of elements you want to enter in a1,a2");
	scanf("%d",&n);
	n2=2*n;

	int a[n],b[n],c[n2];
	la=sizeof(a)/sizeof(a[0]);
	lb=la;
	lc=sizeof(c)/sizeof(c[0]);

	printf("enter elements in a\n");
	for(i=0;i<la;i++)
		scanf("%d",&a[i]);
	

	printf("enter elements of b\n");	
	for(i=0;i<la;i++)
		scanf("%d",&b[i]);
	

	merge(a,b,c,la);

	printf("after merge:");
	for(i=0;i<lc;i++)
		printf("%d ",c[i]);








}
