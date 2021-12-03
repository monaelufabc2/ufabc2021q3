#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *arquivo = fopen(argv[1], "r");
    char c = fgetc(arquivo);
    while(c != EOF)
    {
        printf("%c", c);
        c = fgetc(arquivo);
    }
    return 0;
}