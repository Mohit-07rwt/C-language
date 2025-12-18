//wap design a funtion which return 3-different types of data int,string ,float
#include<stdio.h>
struct stu{
	int rollnum;
	char name[20];
	float marks;
};

struct stu ret_isf(void);
void main()
{
	struct stu v=ret_isf();
	printf("%d   %s    %.2f\n",v.rollnum,v.name,v.marks);
}

struct stu ret_isf(void)
{
	struct stu v={5,"abcd",45.6};
	return v;
}
