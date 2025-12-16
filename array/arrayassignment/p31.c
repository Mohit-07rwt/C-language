//WAP in C to count all duplicate elements from array.	 i/p: a[10]={3,3,2,4,4,2,5,3,4,9}	 o/p: 3 ->3 times ,2-> 2 times , 4-> 3 times WAP in C to count all duplicate elements from array. 

#include<stdio.h>
void count(int *,int);

void main()
{
	int n,i;
	printf("enter number of elements you want:");
	scanf("%d",&n);


	int a[n];
	printf("enter elemnts:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	count(a,n);
}


void count(int *a,int n)
{
	int i,j=0,c=1,k;
	for(i=0;i<n;i++)
	{
		c=1;
		if(a[i]==-1)
			continue;
		for(k=i+1;k<n;k++)
		{
			if(a[i]==a[k])
			{
				c++;
				a[k]=-1;			
			}

		}
	
		printf("count of %d =%d\n",a[i],c);
	}
}
