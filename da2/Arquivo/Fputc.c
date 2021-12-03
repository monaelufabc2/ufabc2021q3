#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *arquivo;
    char str[1001];
    int i;

    scanf("%s", str);
    arquivo = fopen(argv[1], "w");

    for(i=0; str[i]!='\0'; i++)
    {
        fputc(str[i], arquivo);
    }
    fclose(arquivo);
    return 0;
}