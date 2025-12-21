// WAP in C using CLA to take array input and print in reverse order	 i/p: ./a.out 11 22 33 44 55		o/p: 55 44 33 22 11
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    int arr[20];
    int i, n;

    n = argc;

    for(i = 1; i < n; i++)
    {
        arr[i] = atoi(argv[i]);
    }

    for(i = n - 1; i > 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}



