//30. WAP in C to sort the string in ascending order using while loop only .	i/p: char s[10]= ”Aa1Bb2Cc3”;		o/p: 123ABCabc

#include<stdio.h>
void sort(char *);
void main()
{
	char s[20];
	printf("enter string:");
	scanf("%s",s);

	sort(s);
}


void sort(char *s)
{
	int i,l=0,j;
	for(i=0;s[i];i++,l++);
	
	for(i=0;i<l;i++)
	{
		for(j=0;j<l-i-1;j++)
		{
			if(s[j]>s[j+1])
			{
				char t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
			}
		}
	}
	printf("%s",s);
}
