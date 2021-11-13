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
        printf("pos = %p --- *pos = %c\n", pos, *pos);

        for(i=0; str[i]!='\0'; i++)
        {
            printf("&str[%d] = %p --- str[%d] = %c\n", i, &str[i], i, str[i]);
        }
    }
    else
    {
        printf("letra \"%c\" nao ocorre na string \"%s\".\n", letra, str);
    }
    return 0;
}