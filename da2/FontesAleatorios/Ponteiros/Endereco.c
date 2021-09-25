#include <stdio.h>

int main()
{
    int a = 7, b = 10;

    printf("endereco de a: %p\nendereco de b: %p\n", &a, &b);
    printf("conteudo de a: %d\nconteudo de b: %d\n", a, b);

    return 0;
}