#include <stdio.h>

void divResto(int, int, int *, int *);

int main()
{
    int a, b, resto, divisao;

    scanf("%d %d", &a, &b);
    divResto(a, b, &divisao, &resto);
    printf("%d %d\n", divisao, resto);

    return 0;
}

void divResto(int a, int b, int *d, int *r)
{
    *d = a/b;
    *r = a%b;
}