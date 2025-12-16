//wap in C to count digits in string using pointer .	i/p: char s[20]=”p6c3s1 123 ok7”	 o/p: count = 7

#include<stdio.h>
void main()
{
	char s[20],*p;
	int c=0;
	printf("enter string:");
	scanf("%[^\n]",s);

	p=s;

	int i;
	for(i=0;*(p+i);i++)
	{
		if (*(p+i)>='0' && *(p+i)<='9')
			c++;
	}	
	printf("count= %d",c);
		
}
