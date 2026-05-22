#include"student_header.h"

	//case5
void savefile(stu *ptr)
{
	if(ptr==0)
	{
		printf("NO RECORD FOUND!!\n");
		return;
	}
	
	int choice;
	printf("\033[33;4;1mSTUDENT FILE DATABASE\033[0m\n");
	printf("\033[32m  1)Save & Exit\n  2)Exit without saving\033[0m\n");		
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

