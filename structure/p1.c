//how to make structure  and taKE user input values.

#include<stdio.h>
struct one
{
	int i;
	char ch[20];
	float f;
};

void main()
{
	struct one v;
//	v.i=10;
//	v.ch='a';
//	v.f=99.0;
	printf("enter roll number:  ");
	scanf("%d",&v.i);
	
	printf("enter name:  ");
	scanf("%s",v.ch);
	
	printf("enter marks:  ");
	scanf("%f",&v.f);

	printf("%d    %s   %.2f",v.i,v.ch,v.f);
}
