#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char * geraPalavra(int);
char geraLetra(char *);

int main(int argc, char** argv)
{
    int n = atoi(argv[1]), i;
    char *str;

    srand(time(NULL));
    for(i=0; i<n; i++)
    {
        str = geraPalavra((rand()%100)+1);
        printf("%s %c%s", str, geraLetra(str), i<n-1?"\n":"");
        free(str);
    }
    return 0;
}

char * geraPalavra(int n)
{
    char *str = (char *) malloc((n+1) * sizeof(char));
    int i;

    for(i=0; i<n; i++)
    {
        str[i] = (rand()%26) + (rand()%100<50?'A':'a');
    }
    str[i] = '\0';
    return str;
}

char geraLetra(char *str)
{
    if(rand()%100<90)
    {
        return (rand()%26) + (rand()%100<50?'A':'a');
    }
    else
    {
        return str[rand()%strlen(str)];
    }
}