#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *, int);

int main()
{
    int n, *v, i;

    scanf("%d", &n);
    v = (int*) malloc(n*sizeof(int));
    for(i=0; i<n; i++)
    {
        scanf("%d", &v[i]);
    }

    bubbleSort(v, n);

    for(i=0; i<n; i++)
    {
        printf("%d%c", v[i], i<n-1?' ':'\n');
    }
    return 0;
}

void bubbleSort(int *v, int n)
{
    int i, j, aux;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(v[j] > v[j+1])
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}