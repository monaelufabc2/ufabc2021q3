#include <stdio.h>
#include <string.h>

int main()
{
    char str[101], letra, *pos;
    while(scanf("%s %c", str, &letra) != EOF)
    {
        pos = strchr(str, letra);
        if(pos != NULL)
        {
            printf("%ld\n", pos-str);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}