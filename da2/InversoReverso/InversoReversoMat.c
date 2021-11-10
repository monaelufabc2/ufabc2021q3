#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i, j;
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

        for(i=n-1; i>=0; i--)
        {
            for(j=strlen(lista[i])-1; j>=0; j--)
            {
                printf("%c", lista[i][j]);
            }
            free(lista[i]);
            printf("\n");
        }
        free(lista);
        scanf("%d", &n);
    }
    return 0;
}