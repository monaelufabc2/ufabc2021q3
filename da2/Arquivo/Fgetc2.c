#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *arquivo = fopen(argv[1], "r");
    char str[1001], letra;
    int i = 0;

    letra = fgetc(arquivo);
    while(letra != EOF)
    {
        str[i++] = letra;
        letra = fgetc(arquivo);
    }
    str[i] = '\0';
    printf("Valor recuperado do arquivo %s foi %s\n", argv[1], str);
    return 0;
}