//nested structure
#include<stdio.h>
#include<stdlib.h>
struct date{
	int day;
	int month;
	int year;
};

struct stu{
	int rollnum;
	char name[20];
	float marks;
	struct date dob;
	struct date doj;
};

void main()
{
	int n;
	printf("enter number of students data you want to enter:");
	scanf("%d",&n);
	struct stu **v;
	v=malloc(sizeof(struct stu *)*n);
	int i;
	for(i=0;i<n;i++)
		v[i]=malloc(sizeof(struct stu));
	for(i=0;i<n;i++)
	{
		printf("enter students details : rollnum ,name ,marks , dob=day ,month ,year  , doj=day ,month ,year\n");
		scanf("%d%s%f%d%d%d%d%d%d",&v[i]->rollnum,v[i]->name,&v[i]->marks,&v[i]->dob.day,&v[i]->dob.month,&v[i]->dob.year,&v[i]->doj.day,&v[i]->doj.month,&v[i]->doj.year);
	}
	

	for(i=0;i<n;i++)
	{
		printf("%d   %s   %.2f   %d/%d/%d   %d/%d/%d",v[i]->rollnum,v[i]->name,v[i]->marks,v[i]->dob.day,v[i]->dob.month,v[i]->dob.year,v[i]->doj.day,v[i]->doj.month,v[i]->doj.year);
		printf("\n");
	}
}
