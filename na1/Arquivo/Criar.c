#include <stdio.h>

int main()
{
    char nomeArq[101];
    FILE *arquivo;

    scanf("%s", nomeArq);
    arquivo = fopen(nomeArq, "r");
    if(arquivo == NULL)
    {
        printf("Arquivo %s nao existe!\n", nomeArq);
    }
    return 0;
}