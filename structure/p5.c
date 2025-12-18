//structure pointer with dma
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu
{
	int rollnum;
	char name[20];
	float marks;
};

void main()
{
	struct stu *p;
	p=malloc(sizeof(struct stu)*1);

	printf("enter rollnum,name ,marks\n");	
	scanf("%d%s%f",&p->rollnum,p->name,&p->marks);
	printf("int dir: %d   %s   %.2f\n",p->rollnum,p->name,p->marks);

	p->rollnum=10;
	strcpy(p->name,"mnop");
	p->marks=45.0;
		
	printf("int dir: %d   %s   %.2f\n",p->rollnum,p->name,p->marks);
}
