#include<stdio.h>
void main()
{
	int num,r,rev=0,p=1;
	printf("[enter number:");
	scanf("%d",&num);

	for(;num;num=num/10)
	{
		r=num%10;
		if(r%2!=0)
		{
			rev=rev*10+r;
			p=p*10;
		}
	}
	printf("%d",rev);
}
