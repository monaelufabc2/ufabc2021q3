#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char * geraNome(int);
float geraPreco();

struct Produto
{
    char nome[101];
    int quantidade;
    float preco;
};

int main(int argc, char ** argv)
{
    char nomeArq[101], *str;
    int n = atoi(argv[2]), i;
    struct Produto *produtos;
    FILE *arquivo;

    srand(time(NULL));

    strcpy(nomeArq, argv[1]);
    produtos = (struct Produto *) malloc(n * sizeof(struct Produto));
    for(i=0; i<n; i++)
    {
        str = geraNome((rand()%91)+10);
        strcpy(produtos[i].nome, str);
        free(str);
        produtos[i].quantidade = rand()%1001;
        produtos[i].preco = geraPreco();
    }

    arquivo = fopen(argv[1], "w");

    for(i=0; i<n; i++)
    {
        fwrite(&produtos[i], sizeof(struct Produto), 1, arquivo);
    }
    fclose(arquivo);
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