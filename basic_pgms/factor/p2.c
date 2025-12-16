#include<stdio.h>
void main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	
	int i;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
			printf("%d  ",i);
	}

}
