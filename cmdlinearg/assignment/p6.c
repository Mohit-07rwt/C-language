//WAP in C using CLA to print average and sum of 3 float number .	 i/p: ./a.out 12.56 45.7 345.23		 o/p : sum= 403.49 avg=134.496
#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	float a[3],sum=0,avg=0;
	int i;
	for(i=1;i<=3;i++)
	{
		a[i-1]=atof(argv[i]);
		sum+=a[i-1];
		printf("%.2f  ",a[i-1]);
	}

	printf("\nsum=%.2f",sum);
	printf("\navg=%.2f",sum/3);
	
}
