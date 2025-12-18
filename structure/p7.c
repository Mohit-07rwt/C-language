//in a structure if any of the member is pointer type then how to handle it;
#include<stdio.h>
#include<stdlib.h>
struct stu{
	int rollnum;
	char *name;
	float marks;
};

void main()
{
	struct stu *p;
	p=malloc(sizeof(struct stu));
	p->name=malloc(20);

	printf("enter data\n");
	scanf("%d%s%f",&p->rollnum,p->name,&p->marks);
	
	printf("%d   %s   %.2f\n:",p->rollnum,p->name,p->marks);
//	scanf("%d%s%f",&p->rollnum,p->name,&p->marks);

}
 
