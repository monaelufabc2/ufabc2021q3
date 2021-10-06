#include <stdio.h>

int divResto(int, int, int*, int*);

int main()
{
    int a, b, divisao, resto;
    scanf("%d %d", &a, &b);

    if(divResto(a, b, &divisao, &resto))
    {
        printf("%d %d\n", divisao, resto);
    }
    else
    {
        puts("indefinido");
    }
    return 0;
}

int divResto(int a, int b, int *d, int *r)
{
    if(b != 0)
    {
        *d = a/b;
        *r = a%b;
        return 1;
    }
    return 0;
}