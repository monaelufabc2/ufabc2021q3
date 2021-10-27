#include <stdio.h>

int main()
{
    int c, j, n, turma[1000], i, contaAcima;
    float media;

    scanf("%d", &c);
    for(j=0; j<c; j++)
    {
        scanf("%d", &n);
        media = .0f;
        for(i=0; i<n; i++)
        {
            scanf("%d", &turma[i]);
            media = media + turma[i];
        }
        media = media/n;
        contaAcima = 0;
        for(i=0; i<n; i++)
        {
            if(turma[i] > media)
            {
                contaAcima++;
            }
        }
        printf("%.3f%%\n", (float)(contaAcima*100)/n);
    }
    return 0;
}