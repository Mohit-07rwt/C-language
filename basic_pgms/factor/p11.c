#include<stdio.h>
void main()
{
	int num,r,rev=0;
	printf("enter number:");
	scanf("%d",&num);
	printf("number=%d",num);


	for(;num;num=num/10)
	{
		r=num%10;
		rev=rev*10+r;
	}	
printf("reverse number=%d",rev);

}
