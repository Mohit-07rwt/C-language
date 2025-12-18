//wap to take input in one structure variable and store into another structure variable and also print with both var.
#include<stdio.h>
struct one{
	int i;
	char ch[20];
	float f;

};

void main()
{
	struct one v,v2;
	printf("enter roll number: ");
	scanf("%d",&v.i);

	printf("enter name:");
	scanf("%s",v.ch);

	printf("enter marks: ");
	scanf("%f",&v.f);

	v2=v;
	
	printf("\n----struct v----\n");
	printf("%d    %s    %f",v.i,v.ch,v.f);

	printf("\n----struct v2----\n");
	printf("%d    %s    %f",v2.i,v2.ch,v2.f);
}
