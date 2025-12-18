//structure padding
#include<stdio.h>
//#pragma pack(1)
struct one{
	char c1;
//	char c2;
//	char c3;
	int i2;
	int i1;
}__attribute__((packed));

void main()
{
	struct one v;
	printf("%ld",sizeof(v));
}
