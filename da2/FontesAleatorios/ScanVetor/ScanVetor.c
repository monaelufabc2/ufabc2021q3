#include <stdio.h>

void scanVetor(int *, int);

int main()
{
    int v[100], i;

    for(i=0; i<100; i++)
    {
        printf("%d%c", v[i], i<99?' ':'\n');
    }

    scanVetor(v, 10);

    for(i=0; i<100; i++)
    {
        printf("%d%c", v[i], i<99?' ':'\n');
    }

    scanVetor(v, 5);

    for(i=0; i<100; i++)
    {
        printf("%d%c", v[i], i<99?' ':'\n');
    }

    return 0;
}

void scanVetor(int *v, int n)
{
    int i;
    for(i=0; i<=n; i++)
    {
        printf("Informe o valor de v[%d]: ", i);
        scanf("%d", &v[i]);
    }
}