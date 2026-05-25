#include <stdio.h>

void torre(int c) {
    if (c > 0) {
        torre(c - 1);
        printf("Direita\n");
    }

    // for (int i = 1; i <= 5; i++)
    // {
    //     printf("Direita\n", i);
    // }
    // printf("\n");
}

void bispo(int c) {
    do
    {   
        c--;
        printf("Direita\n");
        printf("Cima\n");
    } while (c > 0);
    printf("\n");
}

void rainha(int c) {
    if (c > 0)
    {
        rainha(c - 1);
        printf("Esquerda\n");
    }
    
    // int rainha = 0;

    // while (rainha < 8)
    // {   
    //     rainha++;
    //     printf("Esquerda\n", rainha);
    // }
    // printf("\n");
}

int main()
{
    // Torre move 5 casas á direita:
    torre(5);
    printf("\n");
    // Bispo move 5 casas á direita e á cima:
    bispo(5);
    printf("\n");
    // Rainha move 8 casas á esquerda:
    rainha(8);
    printf("\n");
    // Cavalo move duas casas para cima e uma a direita:
    int cavaloBaixo = 1;
    for (int i = 1; i < 2; i++)
    {
        while (cavaloBaixo <= 2)
        {
            cavaloBaixo++;
            printf("Cima\n");
        }
        i++;
        printf("Direita\n");
    }
    

    return 0;
}
