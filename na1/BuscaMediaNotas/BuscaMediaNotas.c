#include <stdio.h>
#include <stdlib.h>

int calculaMedia(int *, int);
int somaVet(int *, int);

int main()
{
    int n, i, *qtdNotas, **notas, j, mediaCorte;
    char **nomes, **matriculas;

    scanf("%d", &n);
    nomes = (char**) malloc(n*sizeof(char*));
    matriculas = (char**) malloc(n*sizeof(char*));
    qtdNotas = (int*) malloc(n * sizeof(int));
    notas = (int**) malloc(n * sizeof(int*));
    for(i=0; i<n; i++)
    {
        nomes[i] = (char*) malloc(101 * sizeof(char));
        scanf("%s", nomes[i]);
        matriculas[i] = (char*) malloc(12 * sizeof(char));
        scanf("%s", matriculas[i]);
        scanf("%d", &qtdNotas[i]);
        notas[i] = (int*) malloc(qtdNotas[i] * sizeof(int));
        for(j=0; j<qtdNotas[i]; j++)
        {
            scanf("%d", &notas[i][j]);
        }
    }
    scanf("%d", &mediaCorte);

    for(i=0; i<n; i++)
    {
        if(calculaMedia(notas[i], qtdNotas[i]) >= mediaCorte)
        {
            printf("[%s] %s\n", matriculas[i], nomes[i]);
        }
    }

    for(i=0; i<n; i++)
    {
        free(nomes[i]);
        free(matriculas[i]);
        free(notas[i]);
    }
    free(nomes);
    free(matriculas);
    free(qtdNotas);
    free(notas);
    return 0;
}

int calculaMedia(int *v, int n)
{
    return somaVet(v, n)/n;
}

int somaVet(int *v, int n)
{
    int i, soma = 0;
    for(i=0; i<n; i++)
    {
        soma = soma + v[i];
    }
    return soma;
}