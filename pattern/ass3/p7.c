#include<stdio.h>
void main()
{
	int i,j;	
	char ch='A';
	int num;
	
	for(i=1;i<=6;i++)
	{
		ch='A';
		num=1;
		for(j=1;j<=6-i;j++)
			if(j%2!=0)
			{
				printf("%c",ch);	
				ch++;
			}
			else
			{
				printf("%d",num);
				num++;
			}
	printf("\n");
	}



}
