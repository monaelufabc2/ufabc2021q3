#include <stdio.h>
#include <string.h>

int main()
{
    char str[101], letra, *pos;
    int i;

    scanf("%s %c", str, &letra);
    pos = strchr(str, letra);

    if(pos != NULL)
    {
        /*
        printf("pos:%p --- *pos:%c\n", pos, *pos);
        printf("str:%p\n", str);

        for(i=0; str[i] != '\0'; i++)
        {
            printf("%p ==> %c\n", &str[i], str[i]);
            if(pos == &str[i])
            {
                printf("ACHEI!!!! %d\n", i);
            }
        }*/
        printf("a primeira ocorrencia da letra \"%c\" na string \"%s\" eh na posicao %ld\n", letra, str, pos-str);
    }
    else
    {
        printf("letra \"%c\" nao ocorre na string \"%s\"\n", letra, str);
    }


    return 0;
}