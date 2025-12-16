//wap to check string is  pallindrome  string  or not.

#include<stdio.h>
void main()
{
	char s[20];
	printf("enter string:\n");
	scanf("%s",s);

	int i,j,c=0;

	int len=0;

	for(len=0;s[len];len++);
//	printf("l=%d",len);
	
	for(i=0,j=len-1;i<=j;i++,j--)
	{
		if(s[i]!=s[j])
		{
			c=1;
			break;

		}
	}
	if(c!=1)
		printf("pallindrome");
	else
		printf("not pallindrome");

}
