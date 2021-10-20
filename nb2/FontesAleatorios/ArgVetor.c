#include <stdio.h>

void somaUm(int*, int*);

int main()
{
    int vet[] = {1,2,3,4,5,6,7,8,9,10}, valor=11, i;

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
    printf("valor=%d\n", valor);

    somaUm(vet, &valor);

    for(i=0; i<10; i++)
    {
        printf("%d%c", vet[i], i<9?' ':'\n');
    }
    printf("valor=%d\n", valor);

    return 0;
}

void somaUm(int *v, int *ptV)
{
    int i;

    for(i=0; i<10; i++)
    {
        v[i] = v[i] + 1;
    }

    *ptV = *ptV + 1;
    //ptV[0] = ptV[0] + 1;
}