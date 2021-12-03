#include "Produto.h"

struct Produto criaProduto(char *nome, float preco, int q)
{
    struct Produto p;
    strcpy(p.nome, nome);
    p.preco = preco;
    p.quantidade = q;
    return p;
}