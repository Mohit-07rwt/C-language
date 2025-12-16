#include<stdio.h>
void main()
{	int c=0,num,r;
	printf("enter number:");
	scanf("%d",&num);

	for(;num;num=num/10)
	{	
		r=num%10;
		if (r%2!=0)
		{	if (r>=3 && r<8)
			c++;
		}
	}

	printf("%d",c);
}
