//store roll number , marks ,name of the students and sort them according to user choice;
#include<stdio.h>
#include<string.h>
struct one {
	int rollnum;
	char name[20];
	float marks;
};

void main()
{
	int n,i,j;
	printf("enter number of the students data you want to store");
	scanf("%d",&n);

	struct one v[n],t;
	for(i=0;i<n;i++)
	{
		printf("enter roll_number , name , marks :  ");
		scanf("%d%s%f",&v[i].rollnum,v[i].name,&v[i].marks);
	}

	printf("\n------before sorting-------\n");
	for(i=0;i<n;i++)
	{
		printf("%d   %s   %.2f",v[i].rollnum,v[i].name,v[i].marks);
		printf("\n");
	}

	int choice;
	printf("enter your choice:\n1)sort acc to roll number: \n2)sort acc to name: \n3)sort acc to marks:  ");
	scanf("%d",&choice);

	if(choice==1)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(v[j].rollnum>v[j+1].rollnum)
				{
					t=v[j];
					v[j]=v[j+1];
					v[j+1]=t;
				}
			}
		}
	}

	else if(choice==2)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(strcmp(v[j].name,v[j+1].name)>0)
				{
					t=v[j];
					v[j]=v[j+1];
					v[j+1]=t;
				}
			}
		}
	}
	else if(choice==3)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(v[j].marks>v[j+1].marks)
				{
					t=v[j];
					v[j]=v[j+1];
					v[j+1]=t;
				}
			}
		}
	}
	printf("\n------after sorting-------\n");
	for(i=0;i<n;i++)
	{
		printf("%d   %s   %.2f",v[i].rollnum,v[i].name,v[i].marks);
		printf("\n");
	}
}



