#include"student_header.h"
//checking dublicate names in a student data
int chk_dublicate(stu *temp, char *t)
{
	int c=0;
	while(temp)
	{
		if(strcmp(temp->name,t)==0)
			c++;	
		temp=temp->next;			
	}
	return c;
}
