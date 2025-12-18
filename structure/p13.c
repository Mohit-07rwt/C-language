//wap to design function which will allocate dynamic m/m for 1student data,&return base address of m/m but return type of function is void
#include<stdio.h>
#include<stdlib.h>
struct stu{
	int rollnum;
	char name[20];
	float marks;
};

void ret_dma(struct stu **);
void main()
{
	struct stu *p;
	ret_dma(&p);

	printf("enter rollnum,name,marks\n");
	scanf("%d%s%f",&p->rollnum,p->name,&p->marks);



	printf("%d   %s   %f",p->rollnum,p->name,p->marks);
}
void ret_dma(struct stu **p)
{
	*p=malloc(sizeof(struct stu));
}
