#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char * geraNome(int);
char * geraMatricula(int);

int main(int argc, char** argv)
{
    int n = atoi(argv[1]), i, m, j;
    char *nome, *mat;

    srand(time(NULL));
    printf("%d\n", n);
    for(i=0; i<n; i++)
    {
        nome = geraNome((rand()%100)+1);
        mat = geraMatricula(12);
        printf("%s\n", nome);
        printf("%s\n", mat);
        m = (rand()%10)+1;
        printf("%d\n", m);
        for(j=0; j<m; j++)
        {
            printf("%d%s", rand()%11, j<m-1?" ":"\n");
        }
        free(nome);
        free(mat);
    }
    printf("%d", rand()%11);

}

char * geraNome(int n)
{
    char *s = (char*) malloc((n+1) * sizeof(char));
    int i;
    for(i=0; i<n; i++)
    {
        s[i] = rand()%26 + (rand()%100<50?'A':'a');
    }
    s[i] = '\0';
    return s;
}
char * geraMatricula(int n)
{
    char *s = (char*) malloc((n+1) * sizeof(char));
    int i;
    for(i=0; i<n; i++)
    {
        s[i] = rand()%10 + '0';
    }
    s[i] = '\0';
    return s;
}