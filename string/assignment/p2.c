//wAP in C to find lenght of string using pointer.	 i/p: basic_program , char s[20],*p;	o/p: lenght= 13
#include<stdio.h>
void main()
{
	char s[20], *p;
	int l=0;
	printf("enter string");
	scanf("%[^\n]",s);

	p=s;
	while(*p)
	{
		l++;
		p++;	
	}

	//for(l=0;*(p+l);l++);		
	printf("length of string = %d",l);
}

