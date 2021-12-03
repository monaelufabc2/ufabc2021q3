#include <stdio.h>
#include <ctype.h>


int main()
{
    char nomeArq[101], escolha;
    FILE * arquivo;

    scanf("%s", nomeArq);
    arquivo = fopen(nomeArq, "r");
    if(arquivo == NULL)
    {
        printf("Arquivo %s nao existe.\n", nomeArq);
        do
        {
            printf("Deseja criar? [S]im [N]ao: ");
            scanf("\n%c", &escolha);
        }while(toupper(escolha) != 'S' && toupper(escolha) != 'N');
        if(toupper(escolha) == 'S')
        {
            arquivo = fopen(nomeArq, "w");
        }
    }
    if(arquivo != NULL)
    {
        fclose(arquivo);
    }
    return 0;
}