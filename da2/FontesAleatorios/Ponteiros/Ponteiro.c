#include <stdio.h>

int main()
{
    int i = 7;
    char c = 'U';
    float f = 3.14;
    double d = 3.1415;
    int * ptI;
    char * ptC;
    float * ptF;
    double * ptD;

    ptI = &i;
    ptC = &c;
    ptF = &f;
    ptD = &d;

    printf("i: conteudo:[%d], endereco:[%p]\n", i, &i);
    printf("c: conteudo:[%c], endereco:[%p]\n", c, &c);
    printf("f: conteudo:[%f], endereco:[%p]\n", f, &f);
    printf("d: conteudo:[%lf], endereco:[%p]\n", d, &d);

    printf("ptI: conteudo:[%p], endereco:[%p]\n", ptI, &ptI);
    printf("ptC: conteudo:[%p], endereco:[%p]\n", ptC, &ptC);
    printf("ptF: conteudo:[%p], endereco:[%p]\n", ptF, &ptF);
    printf("ptD: conteudo:[%p], endereco:[%p]\n", ptD, &ptD);

    printf("apontado por ptI: %d\n", *ptI);
    printf("apontado por ptC: %c\n", *ptC);
    printf("apontado por ptF: %f\n", *ptF);
    printf("apontado por ptD: %lf\n", *ptD);

    return 0;
}