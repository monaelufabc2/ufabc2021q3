#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *decToPort(int);

int main()
{
    int n, nMil;
    char *sMil, *s;

    while(scanf("%d", &n) != EOF)
    {
        nMil = n/1000;
        n = n%1000;
        sMil = decToPort(nMil);
        s = decToPort(n);
        printf("%s mil e %s\n", sMil, s);
        free(s);
    }
    return 0;
}

char *decToPort(int n)
{
    int d;
    char *str = (char *) malloc(35 * sizeof(char));
    char unidades[][7] = {"","um","dois","tres","quatro","cinco","seis","sete","oito","nove"};
    char dezenas[][10] = {"","dez","vinte","trinta","quarenta","cinquenta","sessenta","setenta","oitenta","noventa"};
    char centenas[][13] = {"", "cento", "duzentos", "trezentos", "quatrocentos", "quinhentos", "seiscentos", "setecentos", "oitocentos", "novecentos"};
    char excessao[][10] = {"", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"};

    if(n == 0)
    {
        strcat(str, "zero");
    }
    else if(n == 100)
    {
        strcat(str, "cem");
    }
    else
    {
        d = n/100;
        strcat(str, centenas[d]);
        n = n%100;
        d = n/10;
        if(n > 10 && n < 20)
        {
            d = n%10;
            if(strlen(str) != 0)
            {
                strcat(str, " e ");
            }
            strcat(str, excessao[d]);
        }
        else
        {
            if(d != 0 && strlen(str) != 0)
            {
                strcat(str, " e ");
            }
            strcat(str, dezenas[d]);
            d = n%10;
            if(d != 0 && strlen(str) != 0)
            {
                strcat(str, " e ");
            }
            strcat(str, unidades[d]);
        }
    }

    return str;
}



/*
 0 999

 3   4     5

*/