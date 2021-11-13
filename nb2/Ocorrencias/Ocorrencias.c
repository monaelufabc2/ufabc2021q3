#include <stdio.h>
#include <string.h>

int main()
{
    char str[101], letra, *pos;
    int encontrou;

    while(scanf("%s %c", str, &letra) != EOF)
    {
        encontrou = 0;
        pos = strchr(str, letra);
        while(pos != NULL)
        {
            encontrou = 1;
            printf("letra %c ocorreu na posicao %ld.\n", letra, pos-str);
            pos = strchr(pos+1, letra);
        }

        if(!encontrou)
        {
            printf("letra %c nao ocorreu na string.\n", letra);
        }
    }
    return 0;
}