#include"student_header.h"
void printdata(stu *ptr)
{
	if(ptr==0)
	{
		printf("NO RECORD FOUND!!\n");
		return;
	}
	

	while(ptr)
	{
		printf("%d	%s	%.2f\n",ptr->rollnum,ptr->name,ptr->marks);
		ptr=ptr->next;
	}	
}
