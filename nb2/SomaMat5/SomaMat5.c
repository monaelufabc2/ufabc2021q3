#include <stdio.h>

int somaMat(int [][1000], int, int);

int main()
{
    int mat[1000][1000], n, m, i, j;

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

int somaMat(int m[][1000], int lin, int col)
{
    int i, j, soma = 0;
    for(i=0; i<lin; i++)
    {
        for(j=0; j<col; j++)
        {
            soma = soma + m[i][j];
        }
    }
    return soma;
}