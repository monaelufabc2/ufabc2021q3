#include <stdio.h>

int somaVet(int *, int);

int main()
{
    int mat[1000][1000], n, m, i, j, soma = 0, somaPar;

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
        printf("Soma da Linha %d: %d\n", i, somaPar);
        soma = soma + somaPar;
    }


    printf("Somatorio da Matriz: %d\n", soma);
    return 0;
}

int somaVet(int *v, int n)
{
    int s=0, i;
    for(i=0; i<n; i++)
    {
        s = s + v[i];
    }
    return s;
}