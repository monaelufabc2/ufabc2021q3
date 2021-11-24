#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Boleto
{
    char banco[51];
    char cedente[51];
    char sacado[51];
    double valor;
    int diaVencimento;
    int diaPagamento;
    double multa;
};

struct Boleto criaBoleto(char *, char *, char *, double, int, int, double);
void mostraBoleto(struct Boleto);
double calculaValorCobrado(struct Boleto);
void ordenaBoletosValorCobrado(struct Boleto *, int);

int main()
{
    int n, i, diaVen, diaPag;
    double multa, valor;
    char banco[51], ceden[51], sacad[51];
    struct Boleto *vBol;

    scanf("%d", &n);
    vBol = (struct Boleto *) malloc(n * sizeof(struct Boleto));
    for(i=0; i<n; i++)
    {
        scanf("%s %s %s %lf %d %d %lf", banco, ceden, sacad, &valor, &diaVen, &diaPag, &multa);
        vBol[i] = criaBoleto(banco, ceden, sacad, valor, diaVen, diaPag, multa);
    }

    ordenaBoletosValorCobrado(vBol, n);

    for(i=0; i<n; i++)
    {
        mostraBoleto(vBol[i]);
    }
    return 0;
}

struct Boleto criaBoleto(char *banco, char *cedente, char *sacado, double valor, int diaVencimento, int diaPagamento, double multa)
{
    struct Boleto b;

    strcpy(b.banco, banco);
    strcpy(b.cedente, cedente);
    strcpy(b.sacado, sacado);
    b.valor = valor;
    b.diaVencimento = diaVencimento;
    b.diaPagamento = diaPagamento;
    b.multa = multa;

    return  b;
}

void mostraBoleto(struct Boleto b)
{
    printf("%s %s %s %.2lf\n", b.sacado, b.cedente, b.banco, calculaValorCobrado(b));
}

double calculaValorCobrado(struct Boleto b)
{
    if(b.diaPagamento > b.diaVencimento)
    {
        b.valor = b.valor + ((b.diaPagamento - b.diaVencimento) * b.multa);
    }
    return b.valor;
}

void ordenaBoletosValorCobrado(struct Boleto *v, int n)
{
    int i, j;
    struct Boleto aux;

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(calculaValorCobrado(v[j]) < calculaValorCobrado(v[j+1]))
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}