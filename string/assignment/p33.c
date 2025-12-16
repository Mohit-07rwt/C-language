//33. WAP in C to delete duplicate char from string.	i/p: s[20]=”abc abc ppp 122”	o/p : abc p12
#include<stdio.h>
void del_dublicate(char *);
void main()
{
	char s[200];
	printf("enter string: ");
	scanf("%[^\n]",s);


	del_dublicate(s);
	printf("%s",s);
}



void del_dublicate(char *s)
{
	char *p,*q,*k;
	p=s;
	q=s;
	
	
	while(*p)
	{
		q=p+1;
		while(*q)
		{
			if(*p==*q)
			{
				k=q;
				while(*k)
				{
					*k = *(k + 1);
                    			k++;
				}
				q--;		
			}
			q++;
		}
		p++;	
	}
}
