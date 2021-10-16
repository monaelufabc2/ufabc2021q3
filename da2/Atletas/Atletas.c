/*Faça um programa que leia a idade, altura, peso e gênero de
100 atletas, calcular a quantidade de atletas homens acima da
média de altura dos atletas homens e a quantidade de atletas
mulheres abaixo da média de peso das atletas mulheres. */

#include <stdio.h>
#define QUANTIDADE 100

int main()
{
    int idades[QUANTIDADE], i, contaMasc = 0, contaFem = 0, contaMascAltAcimaMedia = 0, contaFemPesAcimaMedia = 0;
    float alturas[QUANTIDADE], pesos[QUANTIDADE], mediaAlturasMasc = .0f, mediaPesosFem = .0f;
    char generos[QUANTIDADE];

    for(i=0; i<QUANTIDADE; i++)
    {
        scanf("%d", &idades[i]);
        scanf("%f", &alturas[i]);
        scanf("%f", &pesos[i]);
        scanf("\n%c", &generos[i]);

        if(generos[i] == 'M')
        {
            mediaAlturasMasc = mediaAlturasMasc + alturas[i];
            contaMasc++;
        }
        else
        {
            mediaPesosFem = mediaPesosFem + pesos[i];
            contaFem++;
        }
    }

    if(contaMasc != 0)
    {
        mediaAlturasMasc = mediaAlturasMasc/contaMasc;
    }

    if(contaFem != 0)
    {
        mediaPesosFem = mediaPesosFem/contaFem;
    }

    for(i=0; i<QUANTIDADE; i++)
    {
        if(generos[i] == 'M' && alturas[i] > mediaAlturasMasc)
        {
            contaMascAltAcimaMedia++;
        }
        else if(generos[i] == 'F' && pesos[i] < mediaPesosFem)
        {
            contaFemPesAcimaMedia++;
        }
    }

    if(contaMasc != 0)
    {
        printf("Ha %d atletas homens acima da media da altura dos homens.\n", contaMascAltAcimaMedia);
    }
    else
    {
        puts("Nao houve entrada de atletas homens.");
    }

    if(contaFem != 0)
    {
        printf("Ha %d atletas mulheres abaixo da media do peso das mulheres.\n", contaFemPesAcimaMedia);
    }
    else
    {
        puts("Nao houve entrada de atletas mulheres.");
    }

    return 0;
}