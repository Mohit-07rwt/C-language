#include"student_header.h"
int main()
{
//	static int i=10;
	stu *headptr=0;
	int op,c;
	while(1)
	{
	//	printf("\033[32m STUDENTS RCORD MENU!!\n");
		//printf("\033[33m STUDENTS RECORD MENU!!\n");
		printf("\033[33;4;1mSTUDENTS RECORD MENU\033[0m\n");

		printf("\033[32m  1)add_data\n  2)print_data\n  3)delete_record\n  4)modify_record\n  5)save_file\n  6)sort_data\n  7)delete_all\n  8)reverse_list\n  9)exit\033[0m\n");
		
		scanf("%d",&op);
	
		switch(op)
		{
			case 1:
				addfirst(&headptr);
				break;
				
			case 2:
				printdata(headptr);
				break;
				
			case 3:
				deletenode(&headptr);
				break;
				
			case 4:
				modifyrecord(&headptr);
				break;
				
			case 5:
				savefile(headptr);
				break;
			
			case 6:
				sortdata(headptr);
				break;
			
			case 7:
				deleteall(&headptr);
				break;
			
			case 8:
				reversedata(&headptr);
				break;
			
			case 9:
				exit(0);
				
			default:
				printf("\033[31;4;1;5m	----UNKOWN CHOICE!!----\033[0m\n\n");
		
		}	
	}
}
/*
int generate_rollnum()
{
    static int roll = 10;
    return roll++;
}




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



	
		//case2
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



	//case3
void deletenode(stu **ptr)
{
	int choice;
	if(*ptr==0)
	{
		printf("RECORD NOT FOUND!!\n");
		return;
	}

	printf("\033[32m ----DELETE DATA----\n");
	printf("1)Based on Rollnumber\n2)Based on Name\n");
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



	//case4
void modifyrecord(stu **ptr)
{
	if(*ptr==0)
	{
		printf("NO RECORDS FOUND!!\n");
		return;
	}

	int choice;
	printf("	----Enter your choice----\n	1)Modify data according to rollnum\n	2)Modify data according to name\n	3)Modify data according to marks");
	
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





	//case5
void savefile(stu *ptr)
{
	if(ptr==0)
	{
		printf("NO RECORD FOUND!!\n");
		return;
	}
	
	int choice;
	printf("----STUDENT DATABASE----\n  1)Save & Exit\n  2)Exit without saving\n");
	scanf("%d",&choice);

	switch (choice)
	{
		case 1:
			FILE *fp=fopen("student_data.txt","w");
			while(ptr)
			{
				fprintf(fp,"%d	%s	%.2f\n",ptr->rollnum,ptr->name,ptr->marks);
				ptr=ptr->next;
			}
			
			printf("----DATA SAVED----\n");
			fclose(fp);
			break;
			
		case 2:
			printf("----DATA IS NOT SAVED----\n");
			break;
			
		default:
			printf("----INVALID OPTION!!----\n");
			break;	
	}
}

void sortdata(stu *ptr)
{
	if(ptr==0)
	{
		printf("NO RECORD FOUND!!\n");
		return;
	}
	
	int choice;
	printf("----DATA SORTING----\n  1)Sort data acc to name\n  2)Sort data acc. to marks\n");
	scanf("%d",&choice);

	switch (choice)
	{
		case 1:
			int i,j,c=count(ptr);
			stu *pl=ptr,*pt,t;
	
			for(i=0;i<c-1;i++)
			{
				pt=pl->next;
				for(j=0;j<c-1-i;j++)
				{
					if(strcmp(pl->name,pt->name)>0)
					{
						t.rollnum=pl->rollnum;
						strcpy(t.name,pl->name);
						t.marks=pl->marks;
					
						pl->rollnum=pt->rollnum;
						strcpy(pl->name,pt->name);
						pl->marks=pt->marks;
						
						pt->rollnum=t.rollnum;
						strcpy(pt->name,t.name);
						pt->marks=t.marks;
					}
					pt=pt->next;	
				}
				pl=pl->next;
			}
			printf("----Data is sorted according to name section----\n");
			break;
			
		case 2:
			int k,l,ct=count(ptr);
			stu *p1=ptr,*p2,t1;
	
			for(k=0;k<ct-1;k++)
			{
				p2=p1->next;
				for(l=0;l<ct-1-k;l++)
				{
					if(p1->marks > p2->marks)
					{
						t1.rollnum=p1->rollnum;
						strcpy(t1.name,p1->name);
						t1.marks=p1->marks;
					
						p1->rollnum=p2->rollnum;
						strcpy(p1->name,p2->name);
						p1->marks=p2->marks;
						
						p2->rollnum=t1.rollnum;
						strcpy(p2->name,t1.name);
						p2->marks=t1.marks;
					}
					p2=p2->next;	
				}
				p1=p1->next;
			}
			printf("----Data is sorted according to marks section----\n");
			break;
	
		default:
			printf("INVALID OPTION\n");
			break;	
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


int count(stu *ptr)
{
	int c=0;
	while(ptr)
	{
		c++;
		ptr=ptr->next;
	}
	return c;
}*/
