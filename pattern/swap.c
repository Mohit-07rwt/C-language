#include<stdio.h>
void main()
{
	int num,pos,m,n,i,j;

	printf("enter number:");
	scanf("%d",&num);
	
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",num>>pos&1);
		if(pos%4==0)
			printf(" ");
	} 
	
	printf("\n");
	for(i=4,j=12;i<8;i++,j++)
	{
		m=num>>i&1;
		n=num>>j&1;

		if(m!=n)
		{
			num=num^1<<i;
			num=num^1<<j;
		}
	}

	for(pos=31;pos>=0;pos--)
	{
		printf("%d",num>>pos&1);
		if(pos%4==0)
			printf(" ");
	}
}
