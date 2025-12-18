//WAP in C using Recursive fun to reverse bits .	i/p : n= 31	00000000 00000000 00000000 00011111	o/p: // print binary in main function	11111000 00000000 00000000 00000000

#include<stdio.h>
int rec_fun_rev_bit (int);
void rec_fun_binary (int);
void main()
{
	int num;
	printf("enter number: ");
	scanf("%d",&num);
	
	rec_fun_binary (num);
	printf("\n");

	num=rec_fun_rev_bit (num);

	rec_fun_binary (num);
}


int rec_fun_rev_bit (int num)
{
	static int i=0,j=31;
	int m,n;
	
	if(i<j)
	{
		m=num>>i&1;
		n=num>>j&1;

		if(m!=n)
		{
			num=num^1<<i;
			num=num^1<<j;
		}
		i=i+1;
		j=j-1;
		
	num=rec_fun_rev_bit (num);
	}
	if (i >= j)
	 {
        	i = 0;
        	j = 31;
    	 }

	return num;
}
void rec_fun_binary (int num)
{

	static int pos=31;
	if(pos>=0)
	{
		printf("%d",num>>pos&1);
	
	pos--;
	rec_fun_binary (num);
	}
	else
		pos=31;
}
