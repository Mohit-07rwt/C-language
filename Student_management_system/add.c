#include"student_header.h"


	//case1
void addfirst(stu **ptr)
{
	stu *new,*last;
	new=malloc(sizeof(stu));
	printf("enter name  marks\n");
	scanf("%s%f",new->name,&new->marks);
	
	new->next=0;
	if(*ptr==0)
	{
		*ptr=new;
		new->rollnum=generate_rollnum();
	}
	else
	{
		last=*ptr;
		while(last->next)
			last=last->next;
		last->next=new;
		last->next->rollnum=generate_rollnum();
	}
}

