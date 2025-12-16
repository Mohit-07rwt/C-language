#include<stdio.h>
void main()
{
	int num,pos,m,n,i,j;
	printf("enter number:");
	scanf("%d",&num);

	//printf("enter byte you want to swap:");
///	scanf("%d",&j);

	printf("before ");
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",num>>pos&1);
		if(pos%8==0)
			printf(" ");
	}
	printf("\n");

	
	for(i=0,j=16;i<=7;i++,j++)
	{
		m=num>>i&1;
		n=num>>j&1;
		if(m!=n)
		{	
			num=num^1<<i;
			num=num^1<<j;
		}
	}
	printf("after  ");

	for(pos=31;pos>=0;pos--)
	{	
		printf("%d",num>>pos&1);
		if(pos%8==0)
			printf(" ");
	}

printf("\n");

}

