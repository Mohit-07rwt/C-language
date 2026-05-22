#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct student
{
	int rollnum;
	char name[20];
	float marks;
	struct student *next;
}stu;

void addfirst(stu **);
int generate_rollnum();
void printdata(stu *);
void deletenode(stu **);
void modifyrecord(stu **);
void savefile(stu *);
void sortdata(stu *);
void deleteall(stu **);
void reversedata(stu **);
int chk_dublicate(stu *, char *);
int count(stu *);

