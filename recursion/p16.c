//compare two strings
#include<stdio.h>
int my_strncmp( char *, char *, int);
void main()
{
	char s1[20],s2[20];
	int n;

	printf("enter s1");
	scanf("%s",s1);
	
	printf("enter s2");
	scanf("%s",s2);

	printf("enter num upto you want to check ");
	scanf("%d",&n);


	if(my_strncmp(s1,s2,n))
		printf("equal");
	else
		printf("not equal");


}
int my_strncmp( char *p, char *q, int n )
{
	
	if(n)
	{
		if(*p!=*q)
			return 0;
	
		else
			my_strncmp(p+1,q+1,n-1);

	}
	if(p==0)
		return 1;

}
