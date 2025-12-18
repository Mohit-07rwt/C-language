/*   WAP to perform following task using structure.
1) allocate dynamic memory for n student’s data
2) store data using run time input
3) print the data based on requirement :
a) design function to print rollno , name and marks of student whose rollno is even number.
b) design function to print rollno and marks of student whose name’s first and last letter is vowel.
c) design function to print mark of student whose names length pow of 2 number.
d) design function to print name of student who got highest marks.
e) design function to print rollno and name of student whose marks abr between 45 to 85.
f) design function to print rollno , name and marks of student who failed (marks < 35) in exam. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu
{
	int rollnum;
	char name[20];
	float marks;
}stu;

int ret_dma(struct stu ***);
void data_store(struct stu **,int);
void even_data(struct stu **,int);
void vowel_data(struct stu **,int);
void name_len_pow2(struct stu **,int);
void highest_marks(struct stu **,int );
void range_45_85(struct stu **,int);
void failed_students(struct stu **,int);
void delete_data(struct stu ***,int *);
void update_data(struct stu ***,int *);
void add_data(struct stu ***,int *);

void main()
{
	int n,i,choice;	
	struct stu **p;
	n=ret_dma(&p);
	
	data_store(p,n);

	printf("\n----After storing data----\n");
	for(i=0;i<n;i++)
		printf("%d	%s	%.2f\n",p[i]->rollnum,p[i]->name,p[i]->marks);
	printf("\n");


	printf("select your choice  based on requirement \n\n:1) rollno , name and marks of student whose rollno is even number.\n\n 2) rollno and marks of student whose name’s first and last letter is vowel.\n\n 3) marks of student whose names length pow of 2 number.\n\n 4) name of student who got highest marks.\n\n 5) rollno and name of student whose marks abr between 45 to 85.\n\n 6) rollno , name and marks of student who failed (marks < 35) in exam.\n\n 7)delete data whose marks are less than 35.\n\n 8)update students data.\n\n 9)Add new data\n");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:	
			even_data(p,n);
			break;

		case 2:
			vowel_data(p,n);
			break;

		case 3:
			name_len_pow2(p,n);
			break;

		case 4:
			highest_marks(p,n);
			break;

		case 5:
			range_45_85(p,n);
			break;

		case 6:
			failed_students(p,n);
			break;

		case 7:
			delete_data(&p,&n);
			
			printf("\n----After deleting student's data whose marks are less than 35----\n");
			for(i=0;i<n;i++)
			printf("%d	%s	%.2f\n",p[i]->rollnum,p[i]->name,p[i]->marks);

			break;


		case 8:	
			update_data(&p,&n);


			printf("\n----After updating stored data----\n");
			for(i=0;i<n;i++)
			printf("%d	%s	%.2f\n",p[i]->rollnum,p[i]->name,p[i]->marks);
	

			break;

		case 9:
			
			add_data(&p,&n);
			
			printf("\n----After adding new data----\n");
			for(i=0;i<n;i++)
			printf("%d	%s	%.2f\n",p[i]->rollnum,p[i]->name,p[i]->marks);

			break;

		default:
			printf("wrong choice!!");
	}	

	printf("\n\nn=%d",n);


}


int ret_dma(struct stu ***p)
{
	int n,i;
	printf("enter number of student data you want to store:\n");
	scanf("%d",&n);

	*p=malloc(sizeof(struct stu *)*n);
	for(i=0;i<n;i++)
		(*p)[i]=malloc(sizeof(struct stu)*n);

	return n;
}
	
void data_store(struct stu **p,int n)
{
	int i;
	printf("data store for %d students\n",n);
	for(i=0;i<n;i++)
	{
		printf("enter rollnum,name, marks\n");
		scanf("%d%s%f",&p[i]->rollnum,p[i]->name,&p[i]->marks);

	}
/*	for(i=0;i<n;i++)
	{
		printf("rollnum=%d     name=%s    marks=%f\n",p[i]->rollnum,p[i]->name,p[i]->marks);
	}
*/
}


//1) rollno , name and marks of student whose rollno is even number
void even_data(struct stu **p,int n)
{	
	int i;
	for(i=0;i<n;i++)
	{
		if((p[i]->rollnum)%2==0)
		{
			printf("%d    %s    %.2f\n",p[i]->rollnum,p[i]->name,p[i]->marks);
		}
	}	
}



//2) rollno and marks of student whose name’s first and last letter is vowel.
void vowel_data(struct stu **p,int n)
{
	int i,len;
	for(i=0;i<n;i++)
	{	
		len=strlen(p[i]->name);
		len--;
		if((p[i]->name[0]=='a' || p[i]->name[0]=='A' || p[i]->name[0]=='e' || p[i]->name[0]=='E' || p[i]->name[0]=='i' || p[i]->name[0]=='I' || p[i]->name[0]=='o' || p[i]->name[0]=='O' || p[i]->name[0]=='u' || p[i]->name[0]=='U') && ((p[i]->name[len]=='a' || p[i]->name[len]=='A' || p[i]->name[len]=='e' || p[i]->name[len]=='E' || p[i]->name[len]=='i' || p[i]->name[len]=='I' || p[i]->name[len]=='o' || p[i]->name[len]=='O' || p[i]->name[len]=='u' || p[i]->name[len]=='U')))
		printf("%d	%s	%.2f\n",p[i]->rollnum,p[i]->name,p[i]->marks);

	}
	
}


//3) marks of student whose names length pow of 2 number.
void name_len_pow2(struct stu **p,int n)
{
	int i,len;
	for(i=0;i<n;i++)
	{
		len=strlen(p[i]->name);
		if((len&(len-1))==0)
			printf("%d	%s	%.2f\n",p[i]->rollnum,p[i]->name,p[i]->marks);
	}
}

//4) name of student who got highest marks.
void highest_marks(struct stu **p,int n)
{
	int i,j,max=0;
	for(i=0;i<n;i++)
	{
		if((p[i]->marks)>max)
		{
			max=p[i]->marks;
			j=i;
		}
	}
	printf("Highest Marks:	%d	%s	%.2f\n",p[j]->rollnum,p[j]->name,p[j]->marks);

}


//5) rollno and name of student whose marks abr between 45 to 85.
void range_45_85(struct stu **p,int n)
{
	int i;
	printf("Marks range b/w(45-85):  ");
	for(i=0;i<n;i++)
	{
		if((p[i]->marks)>45 && (p[i]->marks<=85))
		{
			printf("%d      %s      %.2f\n",p[i]->rollnum,p[i]->name,p[i]->marks);
		}
	}
}


//6) rollno , name and marks of student who failed (marks < 35) in exam.
void failed_students(struct stu **p,int n)
{
	int i;
	 printf("Marks (<35):  ");
         for(i=0;i<n;i++)
         {  
               if((p[i]->marks)<35)     
	        {
                         printf("%d      %s      %.2f\n",p[i]->rollnum,p[i]->name,p[i]->marks);
                }
         }
}


//7)delete data
void delete_data(struct stu ***p, int *n)
{
    int i=0,len,j=0;

	for(i=0;i<*n;i++)
	{
       		if(((*p)[i]->marks)<35)
		{
            		free((*p)[i]);
			continue;
		}
		else
		{
                	(*p)[j]= (*p)[i];
			j++;
		}
	}
	*n=j;
/*	
	for(i=0;i<*n;i++)
		printf("%d    %s    %.2f\n",(*p)[i]->rollnum,(*p)[i]->name,(*p)[i]->marks);	
*/

}


//8)update data of student
void update_data(struct stu ***p,int *n)
{
	int i,ch;
	printf("Through which given detail you want to update student's data :\n 1) Rollnum\n 2) Name\n 3) Marks\n");
	scanf("%d",&ch);

	if(ch==1)
	{
		int rolln;
		printf("enter rollnum of student you want to update record");
		scanf("%d",&rolln);
		
		for(i=0;i<*n;i++)
		{
			if(((*p)[i]->rollnum)==rolln)
			{
				printf("enter updated details: rollnum , name , marks\n");
				scanf("%d%s%f",&(*p)[i]->rollnum,(*p)[i]->name,&(*p)[i]->marks);
			}
		}
	}
		
	
	else if(ch==2)
	{
		char nme[50];
		printf("enter name of student you want to update record: ");
		scanf("%s",nme);
		
		for(i=0;i<*n;i++)
		{
			if(strcmp((*p)[i]->name,nme)==0)
			{
				printf("enter updated details: rollnum ,marks ,name \n");
				scanf("%d%s%f",&(*p)[i]->rollnum,(*p)[i]->name,&(*p)[i]->marks);
			}
		}
	}
		

	else if(ch==3)
	{
		float mrk;
		printf("enter marks of student you want to update record");
		scanf("%f",&mrk);
		
		for(i=0;i<*n;i++)
		{
			if(((*p)[i]->marks)==mrk)
			{
				printf("enter updated details: rollnum ,marks ,name \n");
				scanf("%d%s%f",&(*p)[i]->rollnum,(*p)[i]->name,&(*p)[i]->marks);	
			}
		}
	}

/*
	for(i=0;i<*n;i++)
     	{
         	printf("rollnum=%d     name=%s    marks=%f\n",(*p)[i]->rollnum,(*p)[i]->name,(*p)[i]->marks);
	}*/
}
//9)add new student data

void add_data(struct stu ***p,int *n)
{
	int new_size,i;
	printf("enter how many new data you want to add:");
	scanf("%d",&new_size);

	new_size=(*n)+new_size;
	
	*p=realloc(*p,sizeof(struct stu*)* new_size);

	for(i=(*n);i<new_size;i++)
		(*p)[i]=malloc(sizeof(struct stu));

	printf("enter new details rollnum,name,marks");
	for(i=*n;i<new_size;i++)
		scanf("%d%s%f",&(*p)[i]->rollnum,(*p)[i]->name,&(*p)[i]->marks);

	*n=new_size;
}

