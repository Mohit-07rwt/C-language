//WAP in C using Recursive function to reverse	array elements and print array in main .	i/p: int a[6]={11,22,33,44,55,66};	o/p: a[6]={66,55,44,33,22,11};

#include<stdio.h>
void rec_fun_rev_arr( int *a, int ele );
void main()
{
	int a[6],ele,i;
	printf("enter elements: ");
	ele=sizeof(a)/sizeof(a[0]);

	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);


	rec_fun_rev_arr(a,ele);
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);

}

void rec_fun_rev_arr( int *a, int ele )
{
		
	static int i=0,j;
	j=ele-1;
	
	if(i<j)
	{	int t=a[i];
		a[i]=a[j];
		a[j]=t;

		j=j-1;
		i=i+1;

		rec_fun_rev_arr(a,ele);
	}


}
