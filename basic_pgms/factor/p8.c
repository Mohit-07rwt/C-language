#include<stdio.h>
void main()
{
	int num,c=0;
	printf("enter number:");
	scanf("%d",&num);
	
	int i;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			break;
	}

	if(i==num)
		printf("number is not prime");

	else
		printf("number is prime num");

}
