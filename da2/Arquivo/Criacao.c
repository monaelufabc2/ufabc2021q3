#include <stdio.h>
#include <ctype.h>

int main()
{
    char nomeArq[101], resp;
    FILE *arquivo;

    scanf("%s", nomeArq);
    arquivo = fopen(nomeArq, "r");
    while(arquivo == NULL)
    {
        printf("Arquivo %s nao existe.\n", nomeArq);
        do
        {
            printf("Deseja criar o arquivo? [S]im [N]ao: ");
            scanf("\n%c", &resp);
        }while(toupper(resp) != 'S' && toupper(resp) != 'N');

        if(toupper(resp) == 'S')
        {
            arquivo = fopen(nomeArq, "w");
        }
        else
        {
            scanf("\n%s", nomeArq);
        }
        arquivo = fopen(nomeArq, "r");
    }
    return 0;
}