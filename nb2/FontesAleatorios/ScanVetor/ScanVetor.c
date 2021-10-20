#include <stdio.h>

void scanVetor(int *, int);

int main()
{
    int vet[50], i, n;

    for(i=0; i<50; i++)
    {
        printf("%d%c", vet[i], i<49?' ':'\n');
    }

    do
    {
        scanf("%d", &n);
    }while(n < 0 || n > 49);
    scanVetor(vet, n);

    for(i=0; i<50; i++)
    {
        printf("%d%c", vet[i], i<49?' ':'\n');
    }
    return 0;
}

void scanVetor(int *v, int n)
{
    int i;
    for(i=0; i<=n; i++)
    {
        scanf("%d", &v[i]);
    }
}

/*
Faça uma função chamada scanVetor() que recebe um vetor
de inteiros e um inteiro representando o limite do vetor e
leia via teclado os elemento do índice 0 até o índice limite.
*/