#include <stdio.h>
#include <string.h>

int main()
{
    char linha[501], *tok;

    while(!feof(stdin))
    {
        fgets(linha, 501, stdin);
        tok = strtok(linha, ";");
        while(tok != NULL)
        {
            printf("%s\n", tok);
            tok = strtok(NULL, ";");
        }
    }

    return 0;
}