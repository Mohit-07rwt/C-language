//structure pointer
#include<stdio.h>
struct stu
{
	int rollnum;
	char name[20];
	float marks;
};

void main()
{
	struct stu v={5,"abcd",45.5};
	struct stu *p;
	p=&v;
	
	printf("dir: %d   %s   %.2f\n",v.rollnum,v.name,v.marks);
	printf("int dir: %d   %s   %.2f\n",p->rollnum,p->name,p->marks);

	//p->rollnum=10;
	//strcpy(p>name,"mnop");
	//p->marks=45.0;
		
}
