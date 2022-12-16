#include <stdio.h>
#include <string.h>

struct carro{
    char marca[15];
    int ano;
    float preco;
};

void main() {
    struct carro carros[5];
    int i;
    float p;

    for (i = 0; i < 5; i++) {
        printf("\nCARRO %d", i + 1);

        setbuf(stdin, NULL);

        printf("\nMarca: ");
        fgets(carros[i].marca, 15, stdin);

        printf("Ano: ");
        scanf("%d", &carros[i].ano);

        printf("Preco: ");
        scanf("%f", &carros[i].preco);
    }

    printf("===============================");

    while (1){

        printf("\nDigite um valor: ");
        scanf("%f", &p);

        if (p == 0) break;

        printf("\nCarros mais baratos que %.2f", p);

        for (i = 0; i < 5; i++) {
            if (carros[i].preco < p) {
                printf("\n\nMarca: %s", carros[i].marca);
                printf("Ano..: %d", carros[i].ano);
                printf("\nPreco: %.2f", carros[i].preco);
            }
        }
    }
}