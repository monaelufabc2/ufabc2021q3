#include <stdio.h>

int divResto(int, int, int *);

int main()
{
    int a, b, resto, divisao;

    scanf("%d %d", &a, &b);
    divisao = divResto(a, b, &resto);
    printf("%d %d\n", divisao, resto);

    return 0;
}

int divResto(int a, int b, int *r)
{
    *r = a%b;
    return a/b;
}