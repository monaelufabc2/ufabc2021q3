#include <stdio.h>

long int somaVet(int *, int);

int main()
{
    int mat[1000][1000], m, n, i, j, soma = 0;
    long int somaPar;

    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        somaPar = somaVet(mat[i], m);
        printf("A soma da linha %d eh: %ld\n", i, somaPar);
        soma = soma + somaPar;
    }

    printf("Somatorio da Matriz: %d\n", soma);
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