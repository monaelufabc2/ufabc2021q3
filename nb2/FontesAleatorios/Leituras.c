#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;

    // Lendo os valores
    printf("Digite um valor inteiro:");
    scanf("%d",&a);
    printf("Digite um ponto flutuante:");
    scanf("%f",&b);
    printf("Digite um caracter:");
    setbuf(stdin, NULL);
    scanf("%c",&c);
    printf("Digite um ponto flutuante de precisao dupla:");
    scanf("%lf",&d);

    // Imprimindo os valores lidos
    printf("a:%d\n",a);
    printf("b:%f\n",b);
    printf("c:%c\n",c);
    printf("d:%f\n",d);

    return 0;
}
