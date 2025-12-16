#include<stdio.h>
void main()
{
	int num,c=0;
	printf("enter number:");
	scanf("%d",&num);
	
	int i;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{	c++;
			printf("%d  ",i);
		}
	}
printf("\n");
printf("total factor of %d %d",num,c);

}
