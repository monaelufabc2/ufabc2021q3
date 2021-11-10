#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char * geraPalavra(int);

int main(int argc, char** argv)
{
    int n = atoi(argv[1]), i;
    char *str;
    for(i=0; i<n; i++)
    {
        str = geraPalavra((rand()%100)+1);
        printf("%s%s", str, i<n-1?"\n":"");
        free(str);
    }
    return 0;
}

char * geraPalavra(int n)
{
    char *str = (char*) malloc((n+1)*sizeof(char));
    int i;

    for(i=0; i<n; i++)
    {
        str[i] = (rand()%26)+97;
    }
    str[i] = 0; // str[i] = '\0';

    return str;
}