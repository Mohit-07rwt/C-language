#include<stdio.h>
#include<string.h>
void main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("USAGE:./a.out string_ip \n");
		return;
	}

	int len=strlen(argv[1]);
	printf("length of string = %d\n",len);
}
