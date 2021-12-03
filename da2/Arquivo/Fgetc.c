#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *arquivo;
    char caractere;

    if(argc == 2)
    {
        arquivo = fopen(argv[1], "r");

        if(arquivo != NULL)
        {
            caractere = fgetc(arquivo);
            while(caractere != EOF)
            {
                printf("%c", caractere);
                caractere = fgetc(arquivo);
            }
        }
        else
        {
            printf("Arquivo %s nao existe!\n", argv[1]);
        }
    }
    else if(argc < 2)
    {
        puts("A aplicacao Fgetc necessita de um argumento.");
    }
    else
    {
        puts("A aplicacao Fgetc necessita de apenas um argumento.");
    }

    return 0;
}