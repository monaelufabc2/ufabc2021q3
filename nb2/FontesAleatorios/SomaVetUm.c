#include <stdio.h>

void somaVetUm(int *, int);

int main()
{
    int vet[] = {1,2,3,4,5,6,7,8,9,10}, i;

    for(i=0; i<10; i++)
    {
        printf("%d%c", vet[i], i<9?' ':'\n');
    }

    somaVetUm(vet, 10);

    for(i=0; i<10; i++)
    {
        printf("%d%c", vet[i], i<9?' ':'\n');
    }

    return 0;
}

void somaVetUm(int *v, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        v[i] = v[i] + 1;
    }
}