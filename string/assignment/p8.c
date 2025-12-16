//C to check string lenght is prime or not.	i/p: char s[10]= ”pawan”;	 o/p: yes 5 is prime number

#include<stdio.h>
void main()
{
	char s[20],*p;
	printf("enter string");
	scanf("%[^\n]",s);

	p=s;
	int i,l=0;
	for(i=0;*(p+i);i++)
		l++;

	for(i=2;i<l;i++)
	{
		if(l%i==0)
			break;
	}
	if(l==i)
		printf("yes %d is a prime number",l);
	else
		printf("no %d is  not a prime number",l);














}
