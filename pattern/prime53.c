#include<stdio.h>
void main()
{
	int i,j,k,num,nm=53,n,c,c1,m;
	
	printf("enter row:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{	
			printf("*");
		}

		c1=0;
		for(k=0,num=nm;k<n-i;num++)
		{
			c=0;

			for(m=1;m<num;m++)
			{
				if(num%m==0)
					c++;
			}

			if(c==1)
			{
				printf("%d",num);
				k++;	
				c1++;
						
				if(c1==2)
					nm=num;
			}

		}
		printf("\n");
	}
}
