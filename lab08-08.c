#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct carta{
    int valor;
    char naipe[10];
};

void main() {
    struct carta jogador01[3], jogador02[3];
    char naipes[4][10] = {"ouros", "espadas", "copas", "paus"};
    int i, temp;

    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        jogador01[i].valor = (rand() % 12) + 1;
        temp = rand() % 3;
        strcpy(jogador01[i].naipe, naipes[temp]);
    }

    for (i = 0; i < 5; i++) {
        jogador02[i].valor = (rand() % 12) + 1;
        temp = rand() % 3;
        strcpy(jogador02[i].naipe, naipes[temp]);
    }

    printf("\nJOGADOR 1");
    for (i = 0; i < 3; i++) {
        printf("\n%d de %s", jogador01[i].valor, jogador01[i].naipe);
    }

    printf("\n\nJOGADOR 2");
    for (i = 0; i < 3; i++) {
        printf("\n%d de %s", jogador02[i].valor, jogador02[i].naipe);
    }
}