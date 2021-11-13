#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char * geraPalavra(int);
char pegaLetra(char *);

int main(int argc, char** argv)
{
    int n = atoi(argv[1]), i;
    char *p;

    srand(time(NULL));
    for(i=0; i<n; i++)
    {
        p = geraPalavra((rand()%100)+1);
        printf("%s %c%s", p, pegaLetra(p), i<n-1?"\n":"");
        free(p);
    }
    return 0;
}

char * geraPalavra(int n)
{
    char *s = (char*) malloc((n+1)*sizeof(char));
    int i;
    for(i=0; i<n; i++)
    {
        s[i] = (rand()%26) + (rand()%100<50?'a':'A');
    }
    s[i] = '\0';
    return s;
}

char pegaLetra(char *str)
{
    if(rand()%100 < 80)
    {
        return (rand()%26) + (rand()%100<50?'a':'A');
    }
    else
    {
        return str[rand()%strlen(str)];
    }
}