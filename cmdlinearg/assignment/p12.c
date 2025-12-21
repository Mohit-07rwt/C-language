//WAP in C using CLA to write given functio.	i/p: ./a.out coding c_ds	o/p : len1= 6 , len2= 4		both string not equal
#include<stdio.h>
#include<string.h>
void main(int argc,char **argv)
{
	char *p,*q;

	p=argv[1];
	q=argv[2];


	printf("%s",p);
	printf("   len1=%ld\n",strlen(p));


	printf("%s",q);
	printf("   len2=%ld\n",strlen(q));

	if(strcmp(p,q)==0)
		printf("\nequal");

	else
		printf("\nnot equal");
		
}
