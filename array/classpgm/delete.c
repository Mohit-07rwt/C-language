// WAP to delete char from string.

//  i/p:   "embedded"   ,  'e'
//  o/p:   "mbddd"
#include<stdio.h>
void main()
{
	char s[20],ch;
	printf("enter string\n");
	scanf("%s",s);

	printf("enter character:\n");
	scanf(" %c",&ch);

	for(int i=0;s[i];i++)
	{
		if(s[i]==ch)
		{
			for(int j=i;s[j];j++)
				s[j]=s[j+1];


		i--;

		}
	}

	printf("after:%s\n",s);
	
}
