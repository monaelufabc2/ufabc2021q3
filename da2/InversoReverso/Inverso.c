#include <stdio.h>
#include <stdlib.h>

void printReverso(char**, int);

int main()
{
    char **lista;
    int n, i;

    scanf("%d", &n);
    lista = (char**) malloc(n*sizeof(char*));
    for(i=0; i<n; i++)
    {
        lista[i] = (char*) malloc(1001 * sizeof(char));
        scanf("%s", lista[i]);
    }
    printReverso(lista, n);
    return 0;
}

void printReverso(char **lista, int n)
{
    int i;
    for(i=n-1; i>=0; i--)
    {
        printf("%s\n", lista[i]);
    }
}