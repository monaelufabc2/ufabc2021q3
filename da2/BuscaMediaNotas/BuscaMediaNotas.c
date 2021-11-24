#include <stdio.h>
#include <stdlib.h>

struct Aluno
{
    char nome[101];
    char matricula[12];
    int qtdNotas;
    int *notas;
};

int mediaNotas(int *, int);
int somaVet(int *, int);

int main()
{
    int n, i, j, notaCorte;
    struct Aluno *turma;

    scanf("%d", &n);
    turma = (struct Aluno*) malloc(n * sizeof(struct Aluno));

    for(i=0; i<n; i++)
    {
        scanf("%s", turma[i].nome);
        scanf("%s", turma[i].matricula);
        scanf("%d", &turma[i].qtdNotas);
        turma[i].notas = (int*) malloc(turma[i].qtdNotas * sizeof(int));
        for(j=0; j<turma[i].qtdNotas; j++)
        {
            scanf("%d", &turma[i].notas[j]);
        }
    }
    scanf("%d", &notaCorte);
    for(i=0; i<n; i++)
    {
        if(mediaNotas(turma[i].notas, turma[i].qtdNotas) >= notaCorte)
        {
            printf("[%s] %s\n", turma[i].matricula, turma[i].nome);
        }
    }

    return 0;
}

int mediaNotas(int *v, int n)
{
    return somaVet(v, n)/n;
}

int somaVet(int *v, int n)
{
    int i, s=0;
    for(i=0; i<n; i++)
    {
        s = s + v[i];
    }
    return s;
}