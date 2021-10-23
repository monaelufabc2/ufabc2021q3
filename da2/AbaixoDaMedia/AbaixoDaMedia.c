/*
Faca um programa que leia as notas de tres atividades de
N alunos e mostrar quantos obtiveram nota abaixo da media
da sala em cada atividade.
*/

#include <stdio.h>

#define QTD_NOTAS 3

int main()
{
    int i, j, n, qtdAbaixo;
    float notas[1000][QTD_NOTAS], medias[QTD_NOTAS];

    for(j=0; j<QTD_NOTAS; j++)
    {
        medias[j] = .0f;
    }

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<QTD_NOTAS; j++)
        {
            scanf("%f", &notas[i][j]);
            medias[j] = medias[j] + notas[i][j];
        }
    }

    for(j=0; j<QTD_NOTAS; j++)
    {
        medias[j] = medias[j]/n;
    }

    for(j=0; j<QTD_NOTAS; j++)
    {
        qtdAbaixo = 0;
        for(i=0; i<n; i++)
        {
            if(notas[i][j] < medias[j])
            {
                qtdAbaixo++;
            }
        }
        printf("Na %da. atividade %d alunos tiveram nota abaixo da media.\n", j+1, qtdAbaixo);
    }
    return 0;
}