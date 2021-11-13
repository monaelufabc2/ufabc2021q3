#include <stdio.h>
#include <string.h>

int main()
{
    char str[501], *tok;

    while(!feof(stdin))
    {
        fgets(str, 501, stdin);
        tok = strtok(str, ";");
        while(tok != NULL)
        {
            printf("%s\n", tok);
            tok = strtok(NULL, ";");
        }
    }

    return 0;
}