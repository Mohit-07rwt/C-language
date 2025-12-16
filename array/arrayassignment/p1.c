//wap to print array using int pointer;
#include<stdio.h>
void main()
{
	int a[5],*p,i;
	p=a;
	printf("enter elements:");
	for(i=0;i<5;i++)
		scanf("%d",p+i);
	
	for(i=0;i<5;i++)
		printf("%d",*p++);

}
