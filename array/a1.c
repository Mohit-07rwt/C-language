#include<stdio.h>
void main()
{
	int a[5]={10,20,30,40,50};
	int ele,i;
	
//	printf("%ld\n",sizeof(a));
//	printf("%ld\n",sizeof a[0]);

	ele=sizeof(a)/sizeof(a[0]);
	printf("ele=%d\n",ele);
	
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);

	printf("\n==================\n");

	for(i=ele-1;i>=0;i--)
		printf("%d ",a[i]);
		printf("\n");

}
