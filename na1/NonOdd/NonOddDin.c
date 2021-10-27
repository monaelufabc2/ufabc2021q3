#include <stdio.h>
#include <stdlib.h>

void nonOdd(int **, int, int);

int main()
{
    int **mat, n, m, i, j;

    scanf("%d %d", &n, &m);

    mat = (int**) malloc(n * sizeof(int*));
    for(i=0; i<n; i++)
    {
        mat[i] = (int*) malloc(m*sizeof(int));
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    nonOdd(mat, n, m);

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d%c", mat[i][j], j<m-1?' ':'\n');
        }
    }
    return 0;
}

void nonOdd(int **m, int lin, int col)
{
    int i, j;
    for(i=0; i<lin; i++)
    {
        for(j=0; j<col; j++)
        {
            if(m[i][j]%2 != 0)
            {
                m[i][j] = -1;
            }
        }
    }
}