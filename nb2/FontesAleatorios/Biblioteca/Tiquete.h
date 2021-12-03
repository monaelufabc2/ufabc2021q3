#include "Produto.h"
#include "Data.h"
#include <stdlib.h>

struct Tiquete
{
    struct Data dtCompra;
    struct Produto *itens;
    int tamanho;
    int quantidade;
};

struct Tiquete criaTiquete(struct Data, int);
void insereProduto(struct Tiquete *, struct Produto);
float calculaTotal(struct Tiquete);
float calculaImposto(struct Tiquete);
