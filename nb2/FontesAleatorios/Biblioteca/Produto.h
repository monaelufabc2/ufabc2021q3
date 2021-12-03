#include <string.h>

struct Produto
{
    char nome[101];
    float preco;
    int quantidade;
};

struct Produto criaProduto(char *, float, int);