#include<stdio.h>
void main()
{
	int num,r,c=0,temp=0,re;
	printf("enter number:");
	scanf("%d",&num);

	for(;num;num=num/10)
	{
		r=num%10;
		temp=temp*10+r;
	}

//printf("%d",temp);
l:
	re=temp%10;
	temp=temp/10;
	if(re%2!=0)
		c++;

if(c<1)
goto l;
printf("%d",re);








}
