#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char * geraNomes(int);
float geraNotas();

int main(int argc, char **argv)
{
    char **nomes, *str;
    int *quantidades, n = atoi(argv[1]), i, j;
    float **notas;
    FILE *arquivo = fopen(argv[2], "w");

    nomes = (char**) malloc(n * sizeof(char *));
    quantidades =  (int*) malloc(n * sizeof(int));
    notas = (float**) malloc(n * sizeof(float *));

    srand(time(NULL));

    for(i=0; i<n; i++)
    {
        nomes[i] = (char*) malloc(101 * sizeof(char));
        str = geraNomes((rand()%91)+10);
        strcpy(nomes[i], str);
        free(str);
        quantidades[i] = (rand()%10) + 1;
        notas[i] = (float*) malloc(quantidades[i] * sizeof(float));
        for(j=0; j<quantidades[i]; j++)
        {
            notas[i][j] = geraNotas();
        }
    }

    for(i=0; i<n; i++)
    {
        fprintf(arquivo, "%d %s %d", i, nomes[i], quantidades[i]);
        for(j=0; j<quantidades[i]; j++)
        {
            fprintf(arquivo, " %lf", notas[i][j]);
        }
        fprintf(arquivo, "\n");
    }
    return 0;
}

char * geraNomes(int n)
{
    char *s = (char*) malloc((n+1) * sizeof(char));
    int i;
    for(i=0; i<n; i++)
    {
        s[i] = rand()%26+'a';
    }
    s[i] = '\0';
    return s;
}

float geraNotas()
{
    int notaInt = rand()%10, notaFr = rand()%100;
    return notaInt + (notaFr/100.f);
}

