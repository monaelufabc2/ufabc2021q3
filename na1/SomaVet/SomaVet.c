#include <stdio.h>
#include <stdlib.h>

long int somaVet(int *, int);

int main()
{
    int *v, n, i;

    scanf("%d", &n);
    v = (int*) malloc(n*sizeof(int));
    for(i=0; i<n; i++)
    {
        scanf("%d", &v[i]);
    }
    printf("%ld\n", somaVet(v, n));
    return 0;
}

long int somaVet(int *v, int n)
{
    long int soma = 0;
    int i;
    for(i=0; i<n; i++)
    {
        soma = soma + v[i];
    }
    return soma;
}