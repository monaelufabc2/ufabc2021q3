#include <stdio.h>
#include <stdlib.h>

int contaLinhas(char *);

int main(int argc, char **argv)
{
    char **nomes, letra, nomeAlu[];
    int *quantidades, n;
    float **notas;
    FILE *arquivo = fopen(argv[1], "r");
    
    n = contaLinhas(argv[1]);
    
    nomes = (char**) malloc(n * sizeof(char*));
    quantidades = (int *) malloc(n * sizeof(int));
    notas = (float **) malloc(n * sizeof(float*));
    
    for(i=0; i<n; i++)
    {
        nomes[i] = (char*) malloc(101 * sizeof(char));
    }
    
    while(fscanf(arquivo, "%d %s", &i, nomeAlu) != EOF)
    {
        
    }
    
}

int contaLinhas(char *s)
{
    FILE *arquivo = fopen(s, "r");
    char letra = fgetc(arquivo);
    int n = 0;
    
    while(letra != EOF)
    {
        if(letra == '\n')
        {
            n++;
        }
        letra = fgetc(arquivo);
    }
    return n;
}