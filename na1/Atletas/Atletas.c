#include <stdio.h>
#define QUANTIDADE 100

int main()
{
    int idades[QUANTIDADE], i, qtdMasc = 0, qtdFem = 0, qtdMascAcimaAltMed = 0, qtdFemAbaixoPesoMed = 0;
    float alturas[QUANTIDADE], pesos[QUANTIDADE], medAltMasc = .0f, medPesoFem = .0f;
    char generos[QUANTIDADE];

    for(i=0; i<QUANTIDADE; i++)
    {
        scanf("%d", &idades[i]);
        scanf("%f", &alturas[i]);
        scanf("%f", &pesos[i]);
        scanf("\n%c", &generos[i]);

        if(generos[i] == 'M')
        {
            medAltMasc = medAltMasc + alturas[i];
            qtdMasc++;
        }
        else
        {
            medPesoFem = medPesoFem + pesos[i];
            qtdFem++;
        }
    }

    if(qtdMasc != 0)
    {
        medAltMasc = medAltMasc/qtdMasc;
    }
    if(qtdFem != 0)
    {
        medPesoFem = medPesoFem/qtdFem;
    }

    for(i=0; i<QUANTIDADE; i++)
    {
        if(generos[i] == 'M' && alturas[i] > medAltMasc)
        {
            qtdMascAcimaAltMed++;
        }
        else if(generos[i] == 'F' && pesos[i] < medPesoFem)
        {
            qtdFemAbaixoPesoMed++;
        }
    }

    if(qtdMasc != 0)
    {
        printf("Ha %d atletas homens acima da media da altura dos homens.\n", qtdMascAcimaAltMed);
    }
    else
    {
        puts("Nao houve entrada de atletas homens.");
    }

    if(qtdFem != 0)
    {
        printf("Ha %d atletas mulheres abaixo da media do peso das mulheres.\n", qtdFemAbaixoPesoMed);
    }
    else
    {
        puts("Nao houve entrada de atletas mulheres.");
    }
    return 0;
}