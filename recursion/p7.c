//WAP in C using Recursive function to count set bit in given num. // pass address of variable		i/p: n= 63 o/p: count: 6

#include<stdio.h>
int rec_fun_count( int *);
void main()
{
	int num ,*p;	
	printf("enter num");
	scanf("%d",&num);

	p=&num;
	int count;
	count=rec_fun_count(p);
	printf("\n");
	printf("count == %d",count);
}


int rec_fun_count( int *p)
{
	static int pos=31,c;
	
	//int *p=num;
	if(pos>=0)
	{
		if((*p>>pos&1)==1)
			c++;
		
		printf("%d",*p>>pos&1);
		pos--;
		
		rec_fun_count(p);
	}
	else
		pos=31;

	return	c;
}
