#include"student_header.h"

void reversedata(stu **ptr)
{
	if(ptr==0)
	{
		printf("----NO RECORDS FOUND!!----\n");
		return;
	}
	
	int cn=count(*ptr);  //finding node count
	if(cn>1)
	{
		stu *t=*ptr,**a=malloc(sizeof(stu *)*cn);
		int i=0;
		
		//sorting the address

		while(t)
		{
			a[i++]=t;
			t=t->next;
		}	
		//change the link
		
		for(i=cn-1;i>0;i--)
		{
			a[i]->next=a[i-1];
			a[0]->next=0;
			
			*ptr=a[cn-1]; //update headptr
		}
	}
}


