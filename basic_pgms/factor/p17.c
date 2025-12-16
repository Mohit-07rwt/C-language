#include<stdio.h>
void main()
{
	int num,pos,c=0;
	printf("enter number:");
	scanf("%d",&num);

	for(pos=31;pos>=0;pos--)
	{

		printf("%d",num>>pos&1);
		if((num>>pos&1)!=0)
			c++;
	}	
printf("\n");
printf("set bit=%d   ",c);
printf("clear bit=%d",31-c);
}
