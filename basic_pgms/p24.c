#include<stdio.h>
void main()
{
	int num,r,c=0,q,i,a,b;
	printf("enter number:");
	scanf("%d",&num);

	a=num;
	b=num;
	printf("middle digits of a given number %d=",a);

	for(;num;num=num/10)
		c++;

	if(c%2==0)
	{
		q=c/2;
//	printf("q=%d",q);
	
		for(i=0;i<q-1;i++)
		{
			a=a/10;	
		}	
	
	printf("%d,%d\n",a%10,(a/10)%10);
	}				

//	printf("c=%d",c);			
	
	else
	{
		q=c/2;
	//	printf("q=%d",q);
	
		for(i=0;i<q;i++)
		{
			b=b/10;	
		}	
	
	printf("%d\n",b%10);
	}				
}

