#include <stdio.h>

#define QTDNOTAS 3

int main()
{
    float notas[1000][QTDNOTAS], medias[QTDNOTAS];
    int n, i, j, qtdAbaixo;

    for(j=0; j<QTDNOTAS; j++)
    {
        medias[j] = .0f;
    }

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<QTDNOTAS; j++)
        {
            scanf("%f", &notas[i][j]);
            medias[j] = medias[j] + notas[i][j];
        }
    }

    for(j=0; j<QTDNOTAS; j++)
    {
        medias[j] = medias[j]/n;
    }

    for(j=0; j<QTDNOTAS; j++)
    {
        qtdAbaixo = 0;
        for(i=0; i<n; i++)
        {
            if(notas[i][j] < medias[j])
            {
                qtdAbaixo = qtdAbaixo + 1;
            }
        }
        printf("Na %da. atividade %d alunos tiveram nota abaixo da media.\n", j+1, qtdAbaixo);
    }
    return 0;
}