#include<stdio.h>
void main()
{
	int c=0,f=1,j,sum=0,r,num,temp=0;

	for(num=44;num<40585;num++)
	{
		sum=0;
		temp=num;

		for(;temp;temp=temp/10)
		{
			f=1;
			r=temp%10;
			for(j=1;j<=r;j++)
				f=f*j;
			
			sum=sum+f;
		}
	
		if(num==sum)
		{
			printf("%d\n",num);
			c++;

		}

	}

		printf("count=%d",c);
}
