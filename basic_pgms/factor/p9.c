#include<stdio.h>
void main()
{
	int num,sum=0;
	printf("enter number:");
	scanf("%d",&num);
	
	int i;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
if(sum==num)
	printf("%d is perfect num",num);

else
	printf("%d is not perfect num",num);
}
