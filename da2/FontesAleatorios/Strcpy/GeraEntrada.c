#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char * geraPalavra(int);

int main()
{
    char *str;
    srand(time(NULL));
    str = geraPalavra((rand()%100)+1);
    printf("%s", str);
    free(str);
    return 0;
}

char * geraPalavra(int n)
{
    int i;
    char *s = (char*) malloc((n+1) * sizeof(char));
    for(i=0; i<n; i++)
    {
        if(rand()%100 < 50)
        {
            s[i] = (rand()%26)+'A';
        }
        else
        {
            s[i] = (rand()%26)+'a';
        }
    }
    s[i] = '\0';
    return s;
}