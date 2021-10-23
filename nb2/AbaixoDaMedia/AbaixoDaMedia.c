#include <stdio.h>

#define QTNOTAS 3

int main()
{
    float notas[1000][QTNOTAS], media[QTNOTAS];
    int i, j, n, qtAbaixo;

    for(j=0; j<QTNOTAS; j++)
    {
        media[j] = .0f;
    }

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<QTNOTAS; j++)
        {
            scanf("%f", &notas[i][j]);
            media[j] = media[j] + notas[i][j];
        }
    }

    for(j=0; j<QTNOTAS; j++)
    {
        media[j] = media[j]/n;
    }

    for(j=0; j<QTNOTAS; j++)
    {
        qtAbaixo = 0;
        for(i=0; i<n; i++)
        {
            if(notas[i][j] < media[j])
            {
                qtAbaixo = qtAbaixo + 1;
            }
        }
        printf("Na %da. atividade %d alunos tiveram nota abaixo da media.\n", j+1, qtAbaixo);
    }

    return 0;
}