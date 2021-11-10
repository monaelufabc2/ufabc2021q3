#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printReverso(char **, int);
void printInverso(char *);

int main()
{
    int n, i;
    char **lista;

    scanf("%d", &n);
    while(n != 0)
    {
        lista = (char**) malloc(n*sizeof(char*));
        for(i=0; i<n; i++)
        {
            lista[i] = (char*) malloc(1001 * sizeof(char));
            scanf("%s", lista[i]);
        }

        printReverso(lista, n);

        for(i=0; i<n; i++)
        {
            free(lista[i]);
        }
        scanf("%d", &n);
        free(lista);
    }
    return 0;
}

void printReverso(char **lista, int n)
{
    int i;
    for(i=n-1; i>=0; i--)
    {
        printInverso(lista[i]);
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