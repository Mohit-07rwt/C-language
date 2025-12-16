#include<stdio.h>
void main()
{
	int num,r,c=0;
	printf("enter number:");
	scanf("%d",&num);

l:
	r=num%10;
	num=num/10;
	if(r%2!=0)
		c++;

if(c<1)
goto l;
printf("%d",r);








}
