#include <stdio.h>
#define QUANTIDADE 100

int main()
{
    int idades[QUANTIDADE], i, qtdMasc = 0, qtdFem = 0, qtdMascAcimaAltMedia = 0, qtdFemAbaixoPesoMedia = 0;
    float pesos[QUANTIDADE], alturas[QUANTIDADE], mediaAltMasc = .0f, mediaPesFem = .0f;
    char generos[QUANTIDADE];

    for(i=0; i<QUANTIDADE; i++)
    {
        scanf("%d", &idades[i]);
        scanf("%f", &alturas[i]);
        scanf("%f", &pesos[i]);
        scanf("\n%c", &generos[i]);

        if(generos[i] == 'M')
        {
            mediaAltMasc = mediaAltMasc + alturas[i];
            qtdMasc++;
        }
        else
        {
            mediaPesFem = mediaPesFem + pesos[i];
            qtdFem++;
        }
    }

    if(qtdMasc != 0)
    {
        mediaAltMasc = mediaAltMasc / qtdMasc;
    }
    if(qtdFem != 0)
    {
        mediaPesFem = mediaPesFem / qtdFem;
    }

    for(i=0; i<QUANTIDADE; i++)
    {
        if(generos[i] == 'M' && alturas[i] > mediaAltMasc)
        {
            qtdMascAcimaAltMedia++;
        }
        else if(generos[i] == 'F' && pesos[i] < mediaPesFem)
        {
            qtdFemAbaixoPesoMedia++;
        }
    }

    if(qtdMasc != 0)
    {
        printf("Ha %d atletas homens acima da media da altura dos homens.\n", qtdMascAcimaAltMedia);
    }
    else
    {
        puts("Nao houve entrada de atletas homens.");
    }
    if(qtdFem != 0)
    {
        printf("Ha %d atletas mulheres abaixo da media do peso das mulheres.\n", qtdFemAbaixoPesoMedia);
    }
    else
    {
        puts("Nao houve entrada de atletas mulheres.");
    }

    return 0;
}