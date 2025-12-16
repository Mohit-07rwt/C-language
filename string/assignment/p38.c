//38. WAP in C to find largest words in string.		i/p: char s[20]=”123 vector c ds”;		o/p: vector

#include<stdio.h>
void largest(char *);
void main()
{
	char s[200];
	printf("enter string");
	scanf("%[^\n]",s);
	
	largest(s);
}

void largest(char *s)
{
	char *p = s;
	int i = 0, j = 0,k= 0;
	int c = 0, max = 0;

	while (p[i])
	{
		if (p[i] != ' ')
		{
			c++;
		}
		else
		{
			if (c > max)
			{
				max = c;
				k=j;
			}
			c = 0;
			j = i + 1;
		}
		i++;
	}
	if (c > max)
	{
		max = c;
		k = j;
	}
	for (i = j; i < j + max; i++)
		printf("%c", s[i]);

}
