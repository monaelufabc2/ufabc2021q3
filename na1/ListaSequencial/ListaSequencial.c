#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Item
{
    int chave;
};

struct Item criaItem(int);

struct Lista
{
    struct Item *itens;
    int tamanho, quantidade;
};

struct Lista criaLista(int);
void destroiLista(struct Lista *);
int tamanho(struct Lista);
int vazia(struct Lista);
int cheia(struct Lista);
void inserir(struct Lista *, int, struct Item);
void inserirPrimeira(struct Lista *, struct Item);
void inserirUltima(struct Lista *, struct Item);
struct Item remover(struct Lista *, int);
struct Item removerPrimeira(struct Lista *);
struct Item removerUltima(struct Lista *);

void mostrar(struct Lista);

int main()
{
    int n, chave, posicao;
    char op[3];
    struct Lista lista;

    scanf("%d", &n);
    lista = criaLista(n);

    while(scanf("%s", op) != EOF)
    {
        if(strcmp(op, "I") == 0)
        {
            scanf("%d %d", &chave, &posicao);
            inserir(&lista, posicao, criaItem(chave));
        }
        else if(strcmp(op, "I1") == 0)
        {
            scanf("%d", &chave);
            inserirPrimeira(&lista, criaItem(chave));
        }
        else if(strcmp(op, "In") == 0)
        {
            scanf("%d", &chave);
            inserirUltima(&lista, criaItem(chave));
        }
        else if(strcmp(op, "R") == 0)
        {
            scanf("%d", &posicao);
            remover(&lista, posicao);
        }
        else if(strcmp(op, "R1") == 0)
        {
            removerPrimeira(&lista);
        }
        else if(strcmp(op, "Rn") == 0)
        {
            removerUltima(&lista);
        }
        else
        {
            mostrar(lista);
        }
    }
    destroiLista(&lista);
    return 0;
}

struct Item criaItem(int chave)
{
    struct Item it;
    it.chave = chave;
    return it;
}

struct Lista criaLista(int n)
{
    struct Lista l;
    l.itens = (struct Item *) malloc(n * sizeof(struct Item));
    l.tamanho = n;
    l.quantidade = 0;
    return l;
}

int tamanho(struct Lista l)
{
    return l.tamanho;
}

int vazia(struct Lista l)
{
    return l.quantidade == 0;
}

int cheia(struct Lista l)
{
    return l.quantidade == tamanho(l);
}

void inserir(struct Lista *l, int p, struct Item it)
{
    int i;
    if(!cheia(*l))
    {
        for(i=l->quantidade; i>p; i--)
        {
            l->itens[i] = l->itens[i-1];
        }
        l->itens[p] = it;
        l->quantidade ++;
    }
}

void inserirPrimeira(struct Lista *l, struct Item it)
{
    inserir(l, 0, it);
}

void inserirUltima(struct Lista *l, struct Item it)
{
    inserir(l, l->quantidade, it);
}

struct Item remover(struct Lista *l, int p)
{
    struct Item removido;
    int i;

    if(!vazia(*l))
    {
        removido = l->itens[p];
        for(i=p; i<l->quantidade-1; i++)
        {
            l->itens[i] = l->itens[i+1];
        }
        l->quantidade --;
    }
    return removido;
}

struct Item removerPrimeira(struct Lista *l)
{
    return remover(l, 0);
}

struct Item removerUltima(struct Lista *l)
{
    return remover(l, l->quantidade-1);
}

void destroiLista(struct Lista *l)
{
    free(l->itens);
}

void mostrar(struct Lista l)
{
    int i;
    for(i = 0; i<l.quantidade; i++)
    {
        printf("%d%s", l.itens[i].chave, i<l.quantidade-1?" ":"\n");
    }
}

/*
I  k p  ==> insere a chave k na posicao p
I1 k    ==> insere a chave k na primeira posicao
In k    ==> insere a chave k na ultima posicao
R  p    ==> remove o item da posicao p
R1      ==> remove o item da primeira posicao
Rn      ==> remove o item da ultima posicao
M       ==> exibe as chaves da lista na tela
*/