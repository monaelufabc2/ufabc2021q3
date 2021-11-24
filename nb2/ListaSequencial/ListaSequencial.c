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
    int tamanho;
    int quantidade;
};

struct Lista criaLista(int);
int vazia(struct Lista);
int cheia(struct Lista);
void inserir(struct Lista *, int, struct Item);
void inserirPrimeiro(struct Lista *, struct Item);
void inserirUltimo(struct Lista *, struct Item);
struct Item remover(struct Lista *, int);
struct Item removerPrimeiro(struct Lista *);
struct Item removerUltimo(struct Lista *);

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
            inserirPrimeiro(&lista, criaItem(chave));
        }
        else if(strcmp(op, "In") == 0)
        {
            scanf("%d", &chave);
            inserirUltimo(&lista, criaItem(chave));
        }
        else if(strcmp(op, "R") == 0)
        {
            scanf("%d", &posicao);
            remover(&lista, posicao);
        }
        else if(strcmp(op, "R1") == 0)
        {
            removerPrimeiro(&lista);
        }
        else if(strcmp(op, "Rn") == 0)
        {
            removerUltimo(&lista);
        }
        else
        {
            mostrar(lista);
        }
    }

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

int vazia(struct Lista l)
{
    return l.quantidade == 0;
}

int cheia(struct Lista l)
{
    return l.quantidade == l.tamanho;
}

void inserir(struct Lista *l, int p, struct Item it)
{
    int i;
    if(!cheia(*l))
    {
        if(p <= l->quantidade)
        {
            for(i=l->quantidade; i>p; i--)
            {
                l->itens[i] = l->itens[i-1];
            }
            l->itens[p] = it;
            l->quantidade ++;
        }
    }
}

void inserirPrimeiro(struct Lista *l, struct Item it)
{
    inserir(l, 0, it);
}

void inserirUltimo(struct Lista *l, struct Item it)
{
    inserir(l, l->quantidade, it);
}

struct Item remover(struct Lista *l, int p)
{
    int i;
    struct Item removido;

    if(!vazia(*l))
    {
        if(p < l->quantidade)
        {
            removido = l->itens[p];
            for(i=p; i<l->quantidade-1; i++)
            {
                l->itens[i] = l->itens[i+1];
            }
            l->quantidade --;
        }
    }
    return removido;
}

struct Item removerPrimeiro(struct Lista *l)
{
    return remover(l, 0);
}

struct Item removerUltimo(struct Lista *l)
{
    return remover(l, l->quantidade-1);
}

void mostrar(struct Lista l)
{
    int i;
    for(i=0; i<l.quantidade; i++)
    {
        printf("%d%s", l.itens[i].chave, i<l.quantidade-1?" ":"\n");
    }
}

/*
I  ch pos ==> insere a chave ch na posicao pos
I1 ch     ==> insere a chave ch na primeira posicao
In ch     ==> insere a chave ch na ultima posicao
R  pos    ==> remove o item da posicao pos
R1        ==> remove o item da primeira posicao
Rn        ==> remove o item da ultima posicao
M         ==> mostra as chaves da lista na tela
*/












