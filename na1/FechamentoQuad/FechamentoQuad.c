#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i, qtdNotas, j, somaNotas;
    char linha[201], *tok, matricula[12], nome[101];

    scanf("%d\n", &n);
    for(i=0; i<n; i++)
    {
        fgets(linha, 201, stdin);
        tok = strtok(linha, ";");
        strcpy(matricula, tok);
        tok = strtok(NULL, ";");
        strcpy(nome, tok);
        tok = strtok(NULL, ";");
        qtdNotas = atoi(tok);
        somaNotas = 0;
        for(j=0; j<qtdNotas; j++)
        {
            tok = strtok(NULL, ";");
            somaNotas = somaNotas + atoi(tok);
        }
        printf("%s %s %.2f\n", matricula, nome, somaNotas/((float)qtdNotas));
    }
    return 0;
}