#include <stdio.h>
#include <string.h>

int main()
{
    char str[101], letra, *pos;

    int i;

    while(scanf("%s %c", str, &letra) != EOF)
    {
        pos = strchr(str, letra);
        if(pos != NULL)
        {
            printf("%p == %c\n", pos, *pos);
        }

        for(i=0; str[i] != '\0'; i++)
        {
            printf("%p %c\n", &str[i], str[i]);
            if(pos == &str[i])
            {
                printf("ACHEI eh na posicao %d\n", i);
            }
        }

        printf("Na string %s a letra %c estah no indice %ld\n", str, letra, (pos-str));
    }
    return 0;
}