#include <stdio.h>

int main()
{
    // Torre move 5 casas á direita:
    for (int i = 1; i <= 5; i++)
    {
        printf("Direita\n", i);
    }
    printf("\n");

    // Bispo move 5 casas á direita e á cima:
    int bispo = 0;
    do
    {   
        bispo++;
        printf("Direita\n", bispo);
        printf("Cima\n", bispo);
    } while (bispo <= 4);
    printf("\n");

    // Rainha move 8 casas á esquerda:
    int rainha = 0;

    while (rainha < 8)
    {   
        rainha++;
        printf("Esquerda\n", rainha);
    }
    printf("\n");

    // Cavalo move duas casas para baixo e uma a esquerda:
    int cavaloBaixo = 1;
    for (int i = 1; i < 2; i++)
    {
        while (cavaloBaixo <= 2)
        {
            cavaloBaixo++;
            printf("Baixo\n");
        }
        i++;
        printf("Esquerda\n");
    }
    

    return 0;
}
