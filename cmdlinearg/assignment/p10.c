/*WAP in C using CLA to print given Pattern .
 i/p: ./a.out 5 ./a.out 3

 9 7 5 3 1
  7 5 3 1		 
   5 3 1
    3 1
     1

*/
#include<stdio.h>
#include<stdlib.h>
void pattern(int,int);
void main(int argc,char **argv)
{
	int i,a,b=2,num=0,j,c=0;
	a=atoi(argv[1]);
	//printf("%d",a);

	
	for(i=1;c<a;i++)
	{
		if(i%2!=0)
		{
			num=i;
			c++;
		}
	}
	
//	printf("%d",num);

	pattern(num,a);
}

void pattern(int n,int a)
{
	int i,j,k=n;
//	printf("%d\n",n);
	
	for(i=1;i<=a;i++)
	{
		for(j=a;j>=a-i;j--)
			printf(" ");

		
		for(k;k>=1;k=k-2)
			printf(" %d",k);
		
		k=n;
		k=k-2*i;
	
		printf("\n");
	}
}

