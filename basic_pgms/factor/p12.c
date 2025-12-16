#include<stdio.h>
void main()
{
	int num,r,rev=0,temp=0;
	printf("enter number:");
	scanf("%d",&num);
//	printf("number\n=%d",num)
	temp=num;


	for(;num;num=num/10)
	{
		r=num%10;
		rev=rev*10+r;
	}
if(rev==temp)	
	printf("pallindrome number=%d",rev);

else
	printf("number is not pallindrome:");


}
