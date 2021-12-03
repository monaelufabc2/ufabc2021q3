#include "Tiquete.h"
#include <stdio.h>

int main()
{
    int n, i, q;
    char nome[101];
    float preco;
    struct Tiquete ticket;


    scanf("%d", &n);
    ticket = criaTiquete(criaData(3, 12, 2021), n);

    for(i=0; i<n; i++)
    {
        scanf("%s %f %d", nome, &preco, &q);
        insereProduto(&ticket, criaProduto(nome, preco, q));
    }

    puts("TIQUETE DE COMPRA");
    printf("DATA: %02d/%02d/%04d\n", ticket.dtCompra.dia, ticket.dtCompra.mes, ticket.dtCompra.ano);
    puts("ITENS DO TIQUETE:");
    puts("=================");
    for(i=0; i<n; i++)
    {
        printf("%02d [%s] %d R$%.2f\n", (i+1), ticket.itens[i].nome, ticket.itens[i].quantidade, ticket.itens[i].preco);
    }
    puts("=================");
    printf("TOTAL: R$%.2f\n", calculaTotal(ticket));
    printf("IMPOSTO APROXIMADO: R$%.2f\n", calculaImposto(ticket));
    puts("=================");
    return 0;
}