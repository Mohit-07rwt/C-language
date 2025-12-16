//wap in C to check string lenght is strong or not.	i/p: char s[10]= ”vector”;	 o/p: 6 is not strong number


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


	printf("length =%d \n",l);

	int f=1,sum=0,r,t=0;
	t=l;
	for(;t;t=t/10)
	{
		r=t%10;
		f=1;
		for(i=1;i<=r;i++)
		{
			f=f*i;
		}
		sum+=f;
	}

	if(sum==l)
		printf("yes %d is a strong number",l);
	else
		printf("no %d is  not a strong number",l);



}
