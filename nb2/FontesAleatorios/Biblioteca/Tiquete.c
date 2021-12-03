#include "Tiquete.h"

struct Tiquete criaTiquete(struct Data d, int tamanho)
{
    struct Tiquete t;
    t.dtCompra = d;
    t.tamanho = tamanho;
    t.itens = (struct Produto*) malloc(tamanho * sizeof(struct Produto));
    t.quantidade = 0;
    return t;
}

void insereProduto(struct Tiquete *t, struct Produto p)
{
    if(t->quantidade < t->tamanho)
    {
        t->itens[t->quantidade] = p;
        t->quantidade ++;
    }
}

float calculaTotal(struct Tiquete t)
{
    int i;
    float total = 0;
    for(i=0; i<t.quantidade; i++)
    {
        total = total + t.itens[i].preco * t.itens[i].quantidade;
    }
    return total;
}

float calculaImposto(struct Tiquete t)
{
    return calculaTotal(t) * 0.10;
}