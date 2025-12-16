//24. WAP in C to delete 0th index element from array		i/p: int a[5]={99,88,77,66,55}, in=0;		o/p: int a[5]={88,77,66,55};

//25.WAP in C to delete 2nd index element from array		i/p: int a[5]={99,88,77,66,55}, pos=2;		o/p: int a[5]={99,88,66,55};



#include<stdio.h>
void delete(int a[],int n,int pos)
{
	for(int i=pos;i<(n-1);i++)
	{
		a[i]=a[i+1];
	}
}


void main()
{
	int n,pos,i;
	char ans;

	printf("enter numbers of element you want to enter:");
	scanf("%d",&n);

	int a[n];
	
	printf("enter elements in array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);


l:
	if(pos<n && n>0)
	{
		printf("enter elment pos you want to delete");
		scanf("%d",&pos);


		delete(a,n,pos);
	
		printf("after delete element from pos %d :  ",pos);
		n=n-1;
		for(i=0;i<n;i++)
		printf("%d ",a[i]);

		if(n>0)
		{
			printf("you want to delete another element from array: 'y' or 'n'");
			scanf(" %c",&ans);
		}
		else
			printf("array have no elements:");
	}

	else
	{
			printf("not possible!  TRY AGAIN-> enter position between range");
			
	}
	

if(ans=='y')
goto l;
}
