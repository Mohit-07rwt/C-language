#include<stdio.h>
void main()
{
	char s[20] ,d[20];
	printf("enter  s  string\n");
	scanf("%s",s);

	printf("enter d string:\n");
	scanf("%s",d);


	printf("before des:  %s\n",d);

	int ld,ls,i,j;
	for(ls=0;s[ls];ls++);

	for(ld=0;d[ld];ld++);


	if(ls+ld+1 <= sizeof(d))
	{
		for(i=0,j=ld;s[i];i++,j++)
			d[j]=s[i];


		d[j]=s[i];

	}	
	else
		printf("cocantenait0n not possibleL");



	printf("after:  %s\n",d);

}

