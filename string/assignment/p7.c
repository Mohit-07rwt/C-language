//waP in C to count set bit all char in string.	i/p: char s[10]=”bcd”	 o/p: 3 4 3

#include<stdio.h>
void main()
{
	char s[20],*p;
	printf("enter string");
	scanf("%[^\n]",s);

	p=s;
	int pos,i,c=0;

	for(i=0;*(p+i)!='\0';i++)
	{
		printf("%c    ",*(p+i));
		for(pos=31;pos>=0;pos--)
		{
			printf("%d   ",*(p+i)>>pos&1);
			if((*(p+i)>>pos&1)==1)
				c++;
		}
	
	printf("set bit= %d   ",c);
	printf("del bit= %d\n",31-c);
	printf("\n");
	}
}
