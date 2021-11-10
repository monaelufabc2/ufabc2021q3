#include <stdio.h>
#include <stdlib.h>

void printListaInverso(char **, int);

int main()
{
    int n, i;
    char **lista;

    scanf("%d", &n);
    lista = (char**) malloc(n * sizeof(char*));
    for(i=0; i<n; i++)
    {
        lista[i] = (char*) malloc(1001 * sizeof(char));
        scanf("%s", lista[i]);
    }
    printListaInverso(lista, n);
    free(lista);
    return 0;
}

void printListaInverso(char **lista, int n)
{
    int i;
    for(i=n-1; i>=0; i--)
    {
        printf("%s\n", lista[i]);
        free(lista[i]);
    }
}