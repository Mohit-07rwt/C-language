#include<stdio.h>
struct stu
{
	int rollnum;
	char name[20];
	float marks;
};

void print1(int,char*,float);
void print2(struct stu);
void print3(struct stu *);

void main()
{
	struct stu v={5,"abcd",45.5};
//	print1(v.rollnum,v.name,v.marks);
	print2(v);
//	print3(&v);

	printf("main:%d    %s    %f\n",v.rollnum,v.name,v.marks);
}
/*
void print3(struct stu *p)
{
	printf("printf3: %d    %s    %f\n",p->rollnum,p->name,p->marks);
	p->rollnum=10;
}
*/

void print2(struct stu v)
{
	printf("printf2: %d    %s    %f\n",v.rollnum,v.name,v.marks);
	v.rollnum=10;
}
/*
void print1(int r,char *n,float m)
{
	printf("printf3: %d    %s    %f\n",r,n,m);
}*/
