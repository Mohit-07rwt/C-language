//union-collcection of different data types which are stored in a same m/m location
#include<stdio.h>
union u
{
	int i;
	char ch;
	float f;
};

/*void main()
{
	union u stu;
	{
		printf("%u\n",&stu.i);
		printf("%u\n",&stu.ch);
		printf("%u\n",&stu.f);
	}	
}
*/

void main()
{
	union u v;
	v.i=260;
	printf("%d\n",v.i);

	v.ch='a';
	printf("%d\n",v.i);
}
