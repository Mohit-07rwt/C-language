//wap to design funtion which will allocate dynamic m/m for 1 students data & return base address of m/m.
#include<stdio.h>
#include<stdlib.h>
struct stu
{
	int rollnum;
	char name[20];
	float marks;
};

struct stu *ret_dma(void);
void main()
{
	struct stu *p;
	p=ret_dma();
	printf("enter rollnum,name,marks");
	scanf("%d%s%f",&p->rollnum,p->name,&p->marks);
	printf("\n%d   %s   %f",p->rollnum,p->name,p->marks);
}

struct stu *ret_dma(void)
{
	struct stu *p;
	p=malloc(sizeof(struct stu));
	return p;
}
