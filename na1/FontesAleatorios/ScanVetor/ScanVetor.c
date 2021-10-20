#include <stdio.h>

void scanVetor(int *, int);

int main()
{
    int vetor[50], n, i;

    scanf("%d", &n);
    for(i=0; i<50; i++)
    {
        printf("%d%c", vetor[i], i<49?' ':'\n');
    }

    scanVetor(vetor, n);

    for(i=0; i<50; i++)
    {
        printf("%d%c", vetor[i], i<49?' ':'\n');
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
de inteiros e um inteiro representando o limite do vetor
e leia via teclado os elemento do índice 0 até o índice limite.
*/
