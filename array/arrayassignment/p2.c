//wap to sort array in decending order
#include<stdio.h>
int sort(int *a)
{
	int t=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5-i-1;j++)
		{
			if(*(a+j+1)> *(a+j))
			{
				 t=*(a+j);
				*(a+j)=*(a+j+1);
				*(a+j+1)=t;
			}
		}
	}


}

int main()
{
	{
		int a[5];
		printf("enter elements:");
		for(int i=0;i<5;i++)
			scanf("%d",&a[i]);

		sort(a);
		for(int i=0;i<5;i++)
			printf("%d",a[i]);

	}
	return 0;
}
