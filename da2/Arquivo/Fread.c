#include <stdio.h>
#include <string.h>

struct Produto
{
    char nome[101];
    int quantidade;
    float preco;
};

int main(int argc, char** argv)
{
    char nomeArq[101];
    FILE *arquivo;
    struct Produto p;

    strcpy(nomeArq, argv[1]);
    arquivo = fopen(nomeArq, "r");

    fread(&p, sizeof(struct Produto), 1, arquivo);
    while(!feof(arquivo))
    {
        printf("Nome do Produto .: %s\n", p.nome);
        printf("Quantidade ......: %d\n", p.quantidade);
        printf("Preco (em R$) ...: %.2f\n", p.preco);
        fread(&p, sizeof(struct Produto), 1, arquivo);
    }
    fclose(arquivo);
    return 0;
}
