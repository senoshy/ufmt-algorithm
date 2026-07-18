#include <stdio.h>
int main()
{
    int bilhete[6], sorteio[6], acertos = 0;
    printf("Bilhete (6 numeros): ");
    for (int i = 0; i < 6; i++)
        scanf("%d", &bilhete[i]);
    printf("Sorteio (6 numeros): ");
    for (int i = 0; i < 6; i++)
        scanf("%d", &sorteio[i]);
    /* forca bruta: compare cada numero do bilhete com cada sorteado */
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (bilhete[i] == sorteio[j])
            {
                acertos++;
                break;
                /* pode parar de comparar este numero do bilhete */
            }
        }
    }
    printf("Acertos: %d\n", acertos);
    if (acertos == 6)
        printf("SENA!\n");
    else if (acertos == 5)
        printf("Quina!\n");
    else if (acertos == 4)
        printf("Quadra!\n");
    else
        printf("Nao premiado.\n");
    return 0;
}