#include <stdio.h>

void nonOdd(int [][1000], int, int);

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

void nonOdd(int m[][1000], int lin, int col)
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