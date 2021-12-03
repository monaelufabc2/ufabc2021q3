#include <stdio.h>

int main(int argc, char **argv)
{
    char str[1001];
    int i;
    FILE *arquivo = fopen(argv[1], "w");

    scanf("%s", str);
    for(i=0; str[i] != '\0'; i++)
    {
        putc(str[i], arquivo);
    }
    fclose(arquivo);
    return 0;
}