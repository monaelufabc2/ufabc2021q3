#include <stdio.h>

void funcaoSomaUm(int *, int *);

int main()
{
    int vet[] = {1,2,3,4,5,6,7,8,9,10}, valor=100, i;

    for(i=0; i<10; i++)
    {
        if(i<9)
        {
            printf("%d ", vet[i]);
        }
        else
        {
            printf("%d\n", vet[i]);
        }
    }
    printf("valor: %d\n", valor);

    funcaoSomaUm(vet, &valor);

    for(i=0; i<10; i++)
    {
        printf("%d%c", vet[i], i<9?' ':'\n');
    }
    printf("valor: %d\n", valor);

    return 0;
}

void funcaoSomaUm(int *vet, int *pV)
{
    int i;
    for(i=0; i<10; i++)
    {
        vet[i] = vet[i] + 1;
    }
    *pV = *pV + 1;
}