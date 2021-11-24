#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Boleto
{
	char banco[51];
	char cedente[51];
	char sacado[51];
	double valor;
	int diaVenc;
	int diaPag;
	double multa;
};

struct Boleto criaBoleto(char *, char *, char *, double, int, int, double);
void printBoleto(struct Boleto);
double calculaValorCobrado(struct Boleto);
void ordenaBoleto(struct Boleto *, int);

int main()
{
	int n, i, diaPag, diaVenc;
	char banco[51], cedente[51], sacado[51];
	double valor, multa;
	struct Boleto *liquidados;

	scanf("%d", &n);
	liquidados = (struct Boleto*) malloc(n * sizeof(struct Boleto));
	for(i=0; i<n; i++)
	{
		scanf("%s %s %s %lf %d %d %lf", banco, cedente, sacado, &valor, &diaVenc, &diaPag, &multa);
		liquidados[i] = criaBoleto(banco, cedente, sacado, valor, diaVenc, diaPag, multa);
	}

	ordenaBoleto(liquidados, n);

	for(i=0; i<n; i++)
	{
		printBoleto(liquidados[i]);
	}
	return 0;
}

struct Boleto criaBoleto(char *banco, char *cedente, char *sacado, double valor, int diaVenc, int diaPag, double multa)
{
	struct Boleto b;

	strcpy(b.banco, banco);
	strcpy(b.cedente, cedente);
	strcpy(b.sacado, sacado);
	b.valor = valor;
	b.diaVenc = diaVenc;
	b.diaPag = diaPag;
	b.multa = multa;

	return b;
}

void printBoleto(struct Boleto b)
{
	printf("%s %s %s %.2lf\n", b.sacado, b.cedente, b.banco, calculaValorCobrado(b));
}

double calculaValorCobrado(struct Boleto b)
{
    if(b.diaPag > b.diaVenc)
    {
        b.valor = b.valor + ((b.diaPag - b.diaVenc)*b.multa);
    }
    return b.valor;
}

void ordenaBoleto(struct Boleto *v, int n)
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