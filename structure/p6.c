//wap to allocate dynamic memory for 5 data.
#include<stdio.h>
#include<stdlib.h>
struct stu{
	int rollnum;
	char name[20];
	float marks;
};

void main()
{
	int n;
	printf("enter number of elements youn want to enter:");
	scanf("%d",&n);
	int i;
	struct stu *v[n];
	for(i=0;i<n;i++)
	{
		v[i]=malloc(sizeof(struct stu));
	}

	
	for(i=0;i<n;i++)
	{
		printf("enter rollnum , name , marks\n");
		scanf("%d%s%f",&v[i]->rollnum,v[i]->name,&v[i]->marks);
	}


	printf("-------------------------------------\n");

	for(i=0;i<n;i++)
	{
		printf("%d   %s   %f",v[i]->rollnum,v[i]->name,v[i]->marks);
		printf("\n");
	}

	for(i=0;i<n;i++)
	{
		free(v[i]);
		v[i]=0;
	}
//	free(v);
//	v[]=0;
	printf("-------------------------------------\n");
	for(i=0;i<n;i++)
	{
		printf("%d   %s   %f",v[i]->rollnum,v[i]->name,v[i]->marks);
		printf("\n");
	}

}
