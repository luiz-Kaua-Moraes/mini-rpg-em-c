#include <stdio.h>

int main()
{
    // jogador

    int vida_jogador = 100;
    int ataque_jogador = 100;
    int defesa_jogador = 0;

    // Inimigo

    int vida_inimigo = 100;
    int ataque_inimigo = 50;
    int defesa_inimigo = 0;

    // visualização dde vida, ataque e defesa
    // vida
    printf("Vida Inimigo: %d\n", vida_inimigo);
    printf("Vida Jogador: %d\n", vida_jogador);

    // ataque
    printf("Ataque do inimigo: %d", ataque_inimigo);
    printf("Ataque do jogador: %d", ataque_jogador);

    printf("Defesa do inimigo: %d", defesa_inimigo);
    printf("Defesa do jogador: %d", defesa_jogador);

    // Dano do jogador e inimigo
    int dano_jogador = ataque_jogador - defesa_inimigo;
    int dano_inimigo = ataque_inimigo - defesa_jogador;

    // Sistema de dano do inimigo

    // Jogador dar dano no inimigo
    // se o ataque do jogador for maior que a defesa do inimigo, ele sofrerá dano
    if (ataque_jogador > defesa_inimigo)
    {
        vida_inimigo -= dano_jogador;
        printf("Vida Inimigo: %d\n", vida_inimigo);
    }

    // Inimigo da dano no jogador
    // se não, se o ataque do inimigo for maior que a defesa do jogador, o jogador sofrerá dano
    if (ataque_inimigo > defesa_jogador)
    {
        vida_jogador -= dano_inimigo;
        printf("Vida jogador: %d\n", vida_jogador);
    }

    // verficar quem venceu
    // se vida inimigo e vida jogador forem menor ou igual a zero deu empate
    if (vida_inimigo <= 0 && vida_jogador <= 0)
    {
        printf("Empate");
    }

    // Se vida inimigo for menor que zero e vida jogador maior que zero, jogador venceu
    else if (vida_inimigo <= 0)
    {
        if (vida_jogador > 0)
        {
            printf("Jogador venceu");
        }
    }

    // Se vida jogador for menor que zero e vida inimigo maior que zero, inimigo venceu
    else if (vida_jogador <= 0)
    {
        if (vida_inimigo > 0)
        {
            printf("inimigo venceu");
        }
    }
}
