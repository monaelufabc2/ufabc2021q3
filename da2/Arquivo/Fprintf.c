#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char *geraNome(int);
float geraPreco();

int main(int argc, char **argv)
{
    char **produtos, *str;
    int *quantidades, n = atoi(argv[1]), i;
    float *valores;
    FILE *arquivo;

    srand(time(NULL));

    produtos = (char **) malloc(n * sizeof(char*));
    quantidades = (int *) malloc(n * sizeof(int));
    valores = (float *) malloc(n * sizeof(float));

    for(i=0; i<n; i++)
    {
        produtos[i] = (char*) malloc(101 * sizeof(char));
        str = geraNome((rand()%91)+10);
        strcpy(produtos[i], str);
        free(str);
        quantidades[i] = rand()%1001;
        valores[i] = geraPreco();
    }

    arquivo = fopen(argv[2], "wb");
    for(i=0; i<n; i++)
    {
        fprintf(arquivo, "%d %s %d %f\n", i, produtos[i], quantidades[i], valores[i]);
        free(produtos[i]);
    }
    free(produtos);
    free(quantidades);
    free(valores);
    return 0;
}

char *geraNome(int n)
{
    char *str = (char*) malloc((n+1) * sizeof(char));
    int i;
    for(i=0; i<n; i++)
    {
        str[i] = (rand()%26)+'a';
    }
    str[i] = '\0';
    return str;
}

float geraPreco()
{
    int prInt = rand()%1000, prFr = rand()%100;
    return prInt + (prFr/100.f);
}