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
void destroiLista(struct Lista *);
int tamanho(struct Lista);
int vazia(struct Lista);
int cheia(struct Lista);
void inserir(struct Lista *, int, struct Item);
void inserirInicio(struct Lista *, struct Item);
void inserirFinal(struct Lista *, struct Item);
struct Item remover(struct Lista *, int);
struct Item removerInicio(struct Lista *);
struct Item removerFinal(struct Lista *);

void mostrar(struct Lista);

int main()
{
    int n, chave, pos;
    char op[3];
    struct Lista lista;

    scanf("%d", &n);
    lista = criaLista(n);

    while(scanf("%s", op) != EOF)
    {
        if(strcmp(op, "I") == 0)
        {
            scanf("%d %d", &chave, &pos);
            inserir(&lista, pos, criaItem(chave));
        }
        else if(strcmp(op, "I1") == 0)
        {
            scanf("%d", &chave);
            inserirInicio(&lista, criaItem(chave));
        }
        else if(strcmp(op, "In") == 0)
        {
            scanf("%d", &chave);
            inserirFinal(&lista, criaItem(chave));
        }
        else if(strcmp(op, "R") == 0)
        {
            scanf("%d", &pos);
            remover(&lista, pos);
        }
        else if(strcmp(op, "R1") == 0)
        {
            removerInicio(&lista);
        }
        else if(strcmp(op, "Rn") == 0)
        {
            removerFinal(&lista);
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
    return l.quantidade ==  l.tamanho;
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

void inserirInicio(struct Lista *l, struct Item it)
{
    inserir(l, 0, it);
}

void inserirFinal(struct Lista *l, struct Item it)
{
    inserir(l, l->quantidade, it);
}

struct Item remover(struct Lista *l, int p)
{
    int i;
    struct Item removido;

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

struct Item removerInicio(struct Lista *l)
{
    return remover(l, 0);
}

struct Item removerFinal(struct Lista *l)
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

void destroiLista(struct Lista *l)
{
    free(l->itens);
}

/*
I chave pos ==> inserir chave na posicao pos
I1 chave ==> inserir chave na primeira posicao
In chave ==> inserir chave na ultima posicao
R pos ==> remover a posicao pos
R1 ==> remover a primeira posicao
Rn ==> remover a ultima posicao
M ==> mostrar a lista
*/