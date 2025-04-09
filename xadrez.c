#include <stdio.h>

void MovimentoTorre(int i)
{
    if (i == 0)  return;
    printf("Direita\n");
    MovimentoTorre(i - 1);
}

void MovimentoBispo(int i)
{
    if (i == 0) return;
    printf("Cima Direita\n");
    MovimentoBispo(i - 1);
}

void MovimentoRainha(int i)
{
    if (i == 0)  return;
    printf("Esquerda\n");
    MovimentoRainha(i - 1);
}


int main()
{
    // Movimento da Torre - 5 casas para a direita (usa Recursividade)
    printf("Movimento da Torre:\n");
    MovimentoTorre(5);

    // Movimento do Bispo - 5 casas na diagonal para cima e à direita (usa Recursividade)
    printf("\nMovimento do Bispo:\n");
    MovimentoBispo(5);

    // Movimento da Rainha - 8 casas para a esquerda (usa Recursividade)
    printf("\nMovimento da Rainha:\n");
    MovimentoRainha(8);

    // Movimento do Cavalo - 2 casas para baixo e 1 casa para esquerda (usa for e while)
    printf("\nMovimento do Cavalo:\n");
    for (int C = 0; C < 2; C++)
    {
        printf("Baixo\n");
        while (C == 1)
        {
            printf("Esquerda\n");
            break;
        }
    }

    return 0;
}
