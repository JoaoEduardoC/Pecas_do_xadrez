#include <stdio.h>

int main()
{
    // Torre move 5 casas á direita:
    for (int i = 1; i <= 5; i++)
    {
        printf("Torre move %d casa(s) á direita\n", i);
    }

    // Bispo move 5 casas á direita e á cima:
    int bispo = 0;
    do
    {   
        bispo++;
        printf("bispo move %d casa(s) á Cima e á Direita\n", bispo);
    } while (bispo <= 4);

    // Rainha move 8 casas á esquerda:
    int rainha = 0;

    while (rainha < 8)
    {   
        rainha++;
        printf("Rainha move %d casa(s) á esquerda\n", rainha);
    }
    

    return 0;
}
