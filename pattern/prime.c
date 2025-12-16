#include<stdio.h>
void main()
{
	int i,j,k,n,nm=29,c=0,num,m;
	
	printf("enter row:");
	scanf("%d",&n);


	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
			printf("*");

		for(k=0,num=nm;k<n-i;num++)
		{
			for(m=2;m<num;m++)
			{
				if(num%m==0)
					break;
			}
			if(m==num)
			{

				printf("%d ",num);
				k++;
				c++;
				if (c==2)
					nm=num;

			}




		}
					
	printf("\n");

	}




}
