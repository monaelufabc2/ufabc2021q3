#include <stdio.h>

int main()
{
    int anoAtual, anoNasc, idade;
    char nome[100];

    scanf("%d %s %d", &anoAtual, nome, &anoNasc);
    idade = anoAtual - anoNasc;
    printf("%s, voce completa %d anos de idade neste ano.\n", nome, idade);

    return 0;
}