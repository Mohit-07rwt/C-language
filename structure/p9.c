//bit field mechanism
#include<stdio.h>
struct one{
	int i;
	unsigned int j:3;
};

void main()
{
	struct one v;
	v.j=7;
	printf("%d\n",v.j);	// & operator is not applicable on bit field mechanism so we only give direct values

	//sizeof() operator is also not applicable to bit field 
	//another way to find size of bit field variables;

	//logic to find size of bit field

	int c=0;
	while(v.j)
	{
		v.j=v.j<<1;
		c++;
	}
	printf("size of v.j %d bits\n",c);
}
