//waP in C to add digits in string using char pointer.	i/p: char s[20]= “123 hello by6” , *cp;		 o/p: sum= 12
#include<stdio.h>
void main()
{
	char s[20],*p;
	printf("enter sring : ");
	scanf("%[^\n]",s);

	p=s;
	int i,sum=0;

	for(i=0;*(p+i);i++)
	{
		if(*(p+i)>='0' && *(p+i)<='9')
		sum+=*(p+i)-'0';	
	
	}
	printf("sum= %d",sum);
}
