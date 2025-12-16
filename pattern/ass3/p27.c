#include<stdio.h>
void main()
{
	int i,j,k;
	char ch='A';
	
	for(i=0;i<9;i=i+2)
	{
		for(j=0;j<8-i;j=j+2)
			printf("*");
	
		for(k=0;k<=i;k++,ch--)
			printf("%c",ch);
		ch='A';
		ch=ch+i+2;	

	printf("\n");
	}


}

