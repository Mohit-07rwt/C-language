//WAP in C using CLA to implement Calculator	ex1 ./a.out 44 + 200	o/p : 244			ex2 ./a.out 44 / 0	o/p : FPE 
#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	int a,b;
	char op;

	a=atoi(argv[1]);
	b=atoi(argv[3]);
	op=argv[2][0];
//	printf("%d     %d",a,b);

	switch(op)
	{
		case '+':
			printf("%d",a+b);
			break;
	
		case '-':
			printf("%d",a-b);
			break;


		case '*':
			printf("%d",a*b);
			break;

		case '/':
			printf("%d",a/b);
			break;

		case '%':
			printf("%d",a%b);
			break;

		default:
			printf("invalid");
	}

}
