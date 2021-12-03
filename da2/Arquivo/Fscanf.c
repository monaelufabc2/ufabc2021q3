#include <stdio.h>
#include <stdlib.h>

int contaLinhas(char *);

int main(int argc, char **argv)
{
    int n, i, *quantidades;
    char **produtos, c;
    float *precos;
    FILE *entrada;

    n = contaLinhas(argv[1]);

    quantidades = (int *) malloc(n * sizeof(int));
    precos = (float *) malloc(n * sizeof(float));
    produtos = (char **) malloc(n * sizeof(char*));
    for(i=0; i<n; i++)
    {
        produtos[i] = (char*) malloc(101 * sizeof(char));
    }

    entrada = fopen(argv[1], "r");

    while(fscanf(entrada, "%d", &i) != EOF)
    {
        fscanf(entrada, "%s %d %f", produtos[i], &quantidades[i], &precos[i]);
    }

    for(i=0; i<n; i++)
    {
        printf("==========================================\n");
        printf("Nome do Produto .: %s\n", produtos[i]);
        printf("Quantidade ......: %d\n", quantidades[i]);
        printf("Preco (em R$) ...: %.2f\n", precos[i]);
    }
    printf("==========================================\n");
    fclose(entrada);

    return 0;
}

int contaLinhas(char *nomeArq)
{
    FILE *entrada = fopen(nomeArq, "r");
    char c = fgetc(entrada);
    int n = 0;
    while(c != EOF)
    {
        if(c == '\n')
        {
            n = n + 1;
        }
        c = fgetc(entrada);
    }
    fclose(entrada);
    return n;
}