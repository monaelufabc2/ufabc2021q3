#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptA, *ptB;

    printf("char: %ld Bytes.\n", sizeof(char));
    printf("short int: %ld Bytes.\n", sizeof(short int));
    printf("int: %ld Bytes.\n", sizeof(int));
    printf("long int: %ld Bytes.\n", sizeof(long int));
    printf("long long int: %ld Bytes.\n", sizeof(long long int));
    printf("float: %ld Bytes.\n", sizeof(float));
    printf("double: %ld Bytes.\n", sizeof(double));

    ptA = (int*) malloc(sizeof(int));
    ptB = (int*) malloc(sizeof(int));

    printf("ptA: %p\n", ptA);
    printf("ptB: %p\n", ptB);
    printf("conteudo de ptA: %d\n", *ptA);
    printf("conteudo de ptB: %d\n", *ptB);

    scanf("%d %d", ptA, ptB);

    printf("conteudo de ptA: %d\n", *ptA);
    printf("conteudo de ptB: %d\n", *ptB);

    *ptA*=*ptB**ptB;

    printf("***conteudo de ptA***: %d\n", *ptA);
    printf("***conteudo de ptB***: %d\n", *ptB);

    free(ptA);
    free(ptB);

    return 0;
}