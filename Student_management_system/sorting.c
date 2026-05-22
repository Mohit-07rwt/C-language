#include"student_header.h"

void sortdata(stu *ptr)
{
	if(ptr==0)
	{
		printf("NO RECORD FOUND!!\n");
		return;
	}
	
	int choice;
	printf("\033[33;4;1mDATA SORTING\033[0m\n");
	printf("\033[32m  1)Sort data acc to name\n  2)Sort data acc. to marks\n\033[0m\n");
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

