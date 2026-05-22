#include"student_header.h"

	//case3
void deletenode(stu **ptr)
{
	int choice;
	if(*ptr==0)
	{
		printf("RECORD NOT FOUND!!\n");
		return;
	}

	printf("\033[33;4;1mDELETE DATA\033[0m\n");
	printf("\033[32m  1)Based on Rollnumber\n  2)Based on Name\033[0m\n");
	scanf("%d",&choice);	
	
	switch (choice)
	{
		case 1:
			int num;
			printf("enter rollnumber  to delete that data\n");
			scanf("%d",&num);
			stu *del=*ptr,*prev;
			while(del)
			{
				if(del->rollnum==num)
				{
					if(del==*ptr)
						*ptr=del->next;
			
					else
					{
						prev->next=del->next;
					}
					
					free(del);
					return;
				}
				prev=del;
				del=del->next;		
			}
			
			printf("NO RECORD FOUND!!\n");
			break;
			
		
		case 2:
		
			char t[20];
			printf("enter name to delete that data\n");
			scanf("%s",t);
			
			stu *sdel=*ptr,*sprev;
			stu *temp=*ptr;
			
			int chk=chk_dublicate(sdel,t);
			
			if(chk==0)
			{
				printf("NO RECORDS FOUND!!\n");
				return;
			}
	
			if(chk>1)
			{
				while(temp)
				{	
					if(strcmp(temp->name,t)==0)
						printf("%d	%s	%f\n",temp->rollnum,temp->name,temp->marks);
							
					temp=temp->next;			
				}
				printf("\n");
				int roll;
				printf("enter rollnum of a student: ");
				scanf("%d",&roll);
			
				while(sdel)
				{
					if(sdel->rollnum==roll &&  strcmp(sdel->name,t)==0)
					{
						if(sdel==*ptr)
							*ptr=sdel->next;
					
						else
						{
							sprev->next=sdel->next;
						}
					
						free(sdel);
						return;
					}
					sprev=sdel;
					sdel=sdel->next;		
				}
			}
			
				
			if(chk==1)
			{
				while(sdel)
				{
					if(strcmp(sdel->name,t)==0)
					{
						if(sdel==*ptr)
							*ptr=sdel->next;
					
						else
						{
							sprev->next=sdel->next;
						}
					
						free(sdel);
						return;
					}
					sprev=sdel;
					sdel=sdel->next;		
				}
			}
		
			
		default:
			printf("\033[31;4;1;5m UNKOWN CHOICE!!!033[0m\n");
	}
}


	//case7
void deleteall(stu **ptr)
{
	if(*ptr==0)
	{
		printf("NO RECORD FOUND!!\n");
		return;
	}
	stu *del=*ptr;
	int cc=1;
	while(del)
	{
		*ptr=del->next;
		free(del);
		printf("node position= %d deleted\n",cc++);
		sleep(1);
		
		del=*ptr;	
	}
	printf("all nodes deleted\n");
}


