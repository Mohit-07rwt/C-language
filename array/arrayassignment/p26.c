//26. WAP in C to delete 2nd,3rd index from array .		i/p: int a[5]={99,88,77,66,55}, pos1=2, pos2=3;		o/p: int a[5]={99,88,55};

#include<stdio.h>
int delete(int a[],int p1,int p2,int n)
{
	int i,j=0;	
	for(i=0;i<n;i++)
	{
		if(i!=p1 && i!=p2)
		{
			a[j]=a[i];
			j++;
		}
	}
	return j;
}

void main()
{
	int n,pos,i,p1,p2;
	printf("enter number of elements you want to enter : ");
	scanf("%d",&n);

	int a[n];
	
	printf("enter elements in array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("enter elements pos you want to delete : ");
	scanf("%d%d",&p1,&p2);

	n=delete(a,p1,p2,n);
	
	printf("after deleting elements");


	for(i=0;i<n;i++)
		printf("%d ",a[i]);

}
