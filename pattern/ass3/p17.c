
#include<stdio.h>
void main()
{
	int i,j,a,c=0,n=0;
	
	for(i=0;i<=7;i++)
	{
		for(j=2;j<=i+2;j++)
		{	a=1;
			c=0;
			n=j;
//			b++;

			while(a<n)
			{
				if(n%a==0)
					c++;
				a++;

			}
			if(c<2)
				printf("%d",n);
		}
		printf("\n");
	}
}

