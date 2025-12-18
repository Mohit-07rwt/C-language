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

void main()
{
	int n,i,choice;	
	struct stu **p;
	n=ret_dma(&p);
	
	data_store(p,n);

	printf("select your choice  based on requirement \n:1) rollno , name and marks of student whose rollno is even number.\n 2) rollno and marks of student whose name’s first and last letter is vowel.\n 3) marks of student whose names length pow of 2 number.\n 4) name of student who got highest marks.\n 5) rollno and name of student whose marks abr between 45 to 85.\n 6) rollno , name and marks of student who failed (marks < 35) in exam.\n");
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

		default:
			printf("wrong choice!!");
	}	


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
//	for(i=0;i<n;i++)
//	{
//		printf("rollnum=%d     name=%s    marks=%f\n",p[i]->rollnum,p[i]->name,p[i]->marks);
//	}
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

