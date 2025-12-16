#include<stdio.h>
void main()
{
	int i,j,k,n,a=5,b=5,l,m,c=5;
	for(i=0;i<5;i++)
	{
		for(j=5;j>5-i;j--)
			printf("%d ",j);

		for(k=i,n=a;k<5;k++)
			printf("%d ",n);
			a--;

		for(l=i,n=b;l<5-1;l++)
			printf("%d ",n);
			b--;

		for(m=1,n=5-i;m<=i;m++,n++)
			printf("%d ",n);

		
	printf("\n");
	}

}
