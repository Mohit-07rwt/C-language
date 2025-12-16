#include<stdio.h>
#include<string.h>
void my_strrev1(char *,char *);
void main()
{
	char s[100],d[20],ch;
	printf("enter string:");
	scanf("%[^\n]",s);

	printf("%s",s);
	printf("\n");
	int len=strlen(s);
	my_strrev1(s,s+len-1);
	printf("%s",s);
}

void my_strrev1(char *p,char *q)
{
	char t;
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
}
