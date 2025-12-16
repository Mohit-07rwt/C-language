//6.WAP in C to print binary of all char in string .	i/p: char s[20]=”12 ab AB”;	 o/p

#include<stdio.h>
void main()
{
	char s[20],*p;
	printf("enter string");
	scanf("%[^\n]",s);

	p=s;
	int pos,i;
	for(i=0;*(p+i)!='\0';i++)
	{
		printf("%c    ",*(p+i));
		for(pos=31;pos>=0;pos--)
			printf("%d",*(p+i)>>pos&1);


		printf("\n");
	}
}
