#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printListaInverso(char **, int);
void printInverso(char *);

int main()
{
    int n, i;
    char **lista;
    scanf("%d", &n);
    while(n != 0)
    {
        lista = (char**) malloc(n * sizeof(char*));
        for(i=0; i<n; i++)
        {
            lista[i] = (char*) malloc(1001 * sizeof(char));
            scanf("%s", lista[i]);
        }
        printListaInverso(lista, n);
        free(lista);
        scanf("%d", &n);
    }
    return 0;
}

void printListaInverso(char **lista, int n)
{
    int i;
    for(i=n-1; i>=0; i--)
    {
        printInverso(lista[i]);
        free(lista[i]);
        printf("\n");
    }
}

void printInverso(char *str)
{
    int i;
    for(i=strlen(str)-1; i>=0; i--)
    {
        printf("%c", str[i]);
    }
}