//wAP in C to print ascii , octal , hex of given string.	 i/p : char s[10]=”program” 	 o/p : p --> 112 160 70    

#include<stdio.h>
void main()
{
	char s[10], *p;
	printf("enter string");
	scanf("%[^\n]",s);
	p=s;
	int i;
	for(i=0;*(p+i)!='\0';i++)
	{
		printf("octal= %o         hexa= %x            ascii= %d \n",*(p+i),*(p+i),*(p+i));


	}
}
