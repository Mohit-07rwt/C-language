#include<stdio.h>
void main()
{
	char ch;
	int pos,c=0,e=0;
	printf("enter character:");
	scanf("%c",&ch);

	for(pos=31;pos>=0;pos--)
	{

		printf("%d",ch>>pos&1);
		if((ch>>pos&1)==0)
			c++;
		else
			e++;
	}	
printf("\n");
printf("set bit=%d   ",e);
printf("clear bit=%d",c);
}
