
//38. WAP in C to find smallest words in string.		i/p: char s[20]=”123 vector c ds”;		o/p: vector

#include<stdio.h>
void smallest(char *);
void main()
{
	char s[200];
	printf("enter string");
	scanf("%[^\n]",s);
	
	smallest(s);
}

void smallest(char *s)
{
	char *p = s;
	int i = 0, j = 0,k= 0;
	int c = 0, min = 999;

	while (p[i])
	{
		if (p[i] != ' ')
		{
			c++;
		}
		else
		{
			if (c < min && c>0)
			{
				min = c;
				k=j;
			}
			c = 0;
			j = i + 1;
		}
		i++;
	}
	if (c < min && c>0)
	{
		min = c;
		k = j;
	}
	for (i = k; i < k+ min; i++)
		printf("%c", s[i]);

}
