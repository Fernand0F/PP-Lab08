#include <stdio.h>
#include <string.h>

struct eletrodomestico{
    char nome[15];
    float potencialE, tempoAtivo;
};

void main() {
    struct eletrodomestico eletrodomesticos[5];
    int i, dias;
    float consumoTotal = 0;

    for (i = 0; i < 5; i++) {
        printf("\nELETRODOMESTICO %d", i + 1);
        
        setbuf(stdin, NULL);
        printf("\nNome: ");
        gets(eletrodomesticos[i].nome);

        printf("Potencial eletrico (kW): ");
        scanf("%f", &eletrodomesticos[i].potencialE);

        printf("Tempo ativo por dia (em horas): ");
        scanf("%f", &eletrodomesticos[i].tempoAtivo);
    }

    printf("\n=================================================");

    printf("\n\nDigiete uma quantidade de dias: ");
    scanf("%d", &dias);

    for (i = 0; i < 5; i++) {
        consumoTotal += eletrodomesticos[i].potencialE * eletrodomesticos[i].tempoAtivo * dias;
    }

    printf("\nConsumo total em %d dias: %.2f", dias, consumoTotal);

    for (i = 0; i < 5; i++) {
        printf("\nConsumo do %s: %.2f%%", eletrodomesticos[i].nome, (eletrodomesticos[i].potencialE * eletrodomesticos[i].tempoAtivo * dias * 100) / consumoTotal);
    }


}