#include <stdio.h>

int somaMat(int mat[][1000], int lin, int col)
{
    int soma = 0, i, j;
    for(i=0; i<lin; i++)
    {
        for(j=0; j<col; j++)
        {
            soma = soma + mat[i][j];
        }
    }
    return soma;
}

int main()
{
    int mat[1000][1000], i, j, n, m;

    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Somatorio da Matriz: %d\n", somaMat(mat, n, m));
    return 0;
}