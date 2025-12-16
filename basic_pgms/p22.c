#include<stdio.h>
void main()
{	int num,r,rev=0,sum=0,c=0;
	printf("enter number:");
	scanf("%d",&num);

	l:
	r=num%10;
	rev=rev*10+r;
	num=num/10;	
	
	if (num)
	goto l;
	

/*	for(;num != 0;num=num/10)
	{
		r=num%10;
		rev=rev*10+r;
	}
*/
	for(int i=0;i<3;)
	{
		if ((rev%10)%2!=0)
			{
				sum=sum+rev%10;
				i++;
			}
		rev=rev/10;
	
	}
	printf("%d",sum);
	

}
