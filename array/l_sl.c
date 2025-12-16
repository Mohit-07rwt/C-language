/*#include<stdio.h>
void main()
{
	int a[5],i,l=a[0],sl=0,indx=0;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);


	for(i=1;i<5;i++)
	{
		if(a[i]>l)
		{
			l=a[i];
			sl=l;		
		}

		else if(a[i]>sl && a[i]<l)
			sl=a[i];
	}
if(sl==0)
	printf("all are smae ");
else
	printf("l=%d  sl=%d",l,sl);
	
}
*/

#include <stdio.h>

void main() {
    int a[5], i;
    int l = 0, sl = 0;

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    l = a[0];
    sl = -1;

    for(i = 1; i < 5; i++)
    {
        if(a[i] > l)
	 {
            sl = l;
            l = a[i];
         }
	 else if(a[i] > sl && a[i] < l) {
            sl = a[i];
        }
    }

    if(sl == -1)
        printf("All are same");
    else
        printf("Largest = %d, Second Largest = %d", l, sl);
}

