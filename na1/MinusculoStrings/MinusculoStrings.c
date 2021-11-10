#include <stdio.h>
#include <string.h>
#include <ctype.h>

char * strlwr(char *);

int main()
{
    char str[101];
    int i;
    while(scanf("%s", str) != EOF)
    {
        printf("%s\n", strlwr(str));
    }
    return 0;
}

char * strlwr(char *str)
{
    int i;
    for(i=0; i<strlen(str); i++)
    {
        str[i] = tolower(str[i]);
    }
    return str;
}