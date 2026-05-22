#include"student_header.h"

	//case4
void modifyrecord(stu **ptr)
{
	if(*ptr==0)
	{
		printf("NO RECORDS FOUND!!\n");
		return;
	}

	int choice;
	printf("\033[33;4;1mENTER YOUR CHOICE\033[0m\n");
	printf("\033[32m  1)Modify data according to rollnum\n  2)Modify data according to name\n  3)Modify data according to marks\033[0m\n");
	
	scanf("%d",&choice);
	
	switch (choice)
	{
			//MODIFY ACC. TO ROLLNUMBER
		case 1:
			int num;
			printf("Enter rollnumber to modify that data\n");
			scanf("%d",&num);
			stu *mod=*ptr;
			while(mod)
			{
				if(mod->rollnum==num)
				{
					printf("enter updated data name	marks\n");
					scanf("%s%f",mod->name,&mod->marks);		
					return;
				}
				mod=mod->next;		
			}
			printf("NO RECORD FOUND!!\n");
			break;

			
			
			//MODIFY ACC. TO NAME
		case 2:
			char t[20];
			printf("enter name to modify that data\n");
			scanf("%s",t);
			
			stu *smod=*ptr;
			stu *temp=*ptr;
			
			int chk=chk_dublicate(smod,t);
			
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
			
				while(smod)
				{
					if(smod->rollnum==roll &&  strcmp(smod->name,t)==0)
					{
						printf("enter updated data name	marks\n");
						scanf("%s%f",smod->name,&smod->marks);		
						return;
					}
					smod=smod->next;		
				}
			}
			
				
			if(chk==1)
			{
				while(smod)
				{
					if(strcmp(smod->name,t)==0)
					{
						printf("enter updated data name	marks\n");
						scanf("%s%f",smod->name,&smod->marks);		
						return;
					}
					smod=smod->next;		
				}
			}
		
		
		
		//MODIFY ACC. TO MARKS	
		case 3:
			float marks;
			printf("Enter marks to modify that data\n");
			scanf("%f",&marks);
			
			stu *mmod=*ptr;
			stu *tmp=*ptr;
			stu *p=*ptr;
		
			int c=0;
				
			while(p)
			{
				if(p->marks==marks)
					c++;	
				p=p->next;			
			}
		
			
			if(c==0)
			{
				printf("NO RECORDS FOUND!!\n");
				return;
			}
	
			if(c>1)
			{
				while(tmp)
				{	
					if(tmp->marks==marks)
						printf("%d	%s	%f\n",tmp->rollnum,tmp->name,tmp->marks);
							
					tmp=tmp->next;			
				}
				printf("\n");
				int roll;
				printf("enter rollnum of a student: ");
				scanf("%d",&roll);
			
				while(mmod)
				{
					if(mmod->marks==marks &&  mmod->marks==marks)
					{
						printf("enter updated data name	marks\n");
						scanf("%s%f",mmod->name,&mmod->marks);		
						return;
					}
					mmod=mmod->next;		
				}
			}
			
				
			if(c==1)
			{
				while(mmod)
				{
					if(mmod->marks==marks)
					{
						printf("enter updated data name	marks\n");
						scanf("%s%f",mmod->name,&mmod->marks);		
						return;
					}
					mmod=mmod->next;		
				}
			}
			
			
		default:
			printf("INVALID OPTION!!\n");
			break;
	}

}


