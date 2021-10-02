#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptA, *ptB;

    /*long unsigned int sizeof( ... )*/
    printf("char: %ld bytes\n", sizeof(char));
    printf("short int: %ld bytes\n", sizeof(short int));
    printf("int: %ld bytes\n", sizeof(int));
    printf("unsigned int: %ld bytes\n", sizeof(unsigned int));
    printf("long int: %ld bytes\n", sizeof(long int));
    printf("long long int: %ld bytes\n", sizeof(long long int));
    printf("float: %ld bytes\n", sizeof(float));
    printf("double: %ld bytes\n", sizeof(double));

    ptA = (int*) malloc(sizeof(int));
    ptB = (int*) malloc(sizeof(int));

    printf("ptA: %p\n", ptA);
    printf("ptB: %p\n", ptB);

    printf("*ptA: %d\n", *ptA);
    printf("*ptB: %d\n", *ptB);

    scanf("%d %d", ptA, ptB);

    printf("*ptA: %d\n", *ptA);
    printf("*ptB: %d\n", *ptB);

    *ptA=*ptA**ptB; // <- :o

    printf("*ptA: %d\n", *ptA);
    printf("*ptB: %d\n", *ptB);

    free(ptA);
    free(ptB);

    return 0;
}