//WAP in C to count -ve ,+ve, even , odd ele in array .     i/p: int a[10]={-11,11,12,-12,9,8,-3,10,22};     o/p: +ve = 6 , -ve = 3 , odd = 2 , even = 4
#include<stdio.h>
void countpnev(int a[],int size,int *p,int *ne,int *o,int *e)
{
	for(int i=0;i<size;i++)
	{
		if(a[i]>0)
			(*p)++;
		else
			(*ne)++;

		if(a[i]%2==0)
			(*e)++;
		else
			(*o)++;
	}
	
}



void main()
{
	int size,i,n,p=0,ne=0,o=0,e=0;
	printf("enter size");
	scanf("%d",&n);

	int a[n];

	size=sizeof(a)/sizeof(a[0]);
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
	
	countpnev(a,size,&p,&ne,&o,&e);
	printf("positive =%d\n",p);
	printf("negative =%d\n",ne);
	printf("odd =%d\n",o);
	printf("even =%d\n",e);
	
}

