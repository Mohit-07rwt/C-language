//wap to compare two strings (case insensitive)
#include<stdio.h>
void main()
{
	char s1[20],s2[20];
	printf("enter string\n");
	scanf("%s%s",s1,s2);
	
	int i,j;

	for(i=0,j=0;s1[i],s2[j];i++,j++)
	{
		if(s1[i]>='A' && s1[i]<='Z')
		{	
			s1[i]=s1[i]+32;

		}
		if(s2[j]>='A' && s2[j]<='Z')
			s2[i]=s2[j]+32;

	}

	printf("s1=%s    s2=%s",s1,s2);	

	for(i=0;s1[i] && s2[i];i++)
	{	
		if(s1[i]!=s2[i])
			break;
	}

	if(s1[i]==s2[i])
		printf("\nequal");

	else
		printf("\nnot equal");


}
