#include <stdio.h>
#include <string.h>

struct ingrediente {
    char nome[25], quantidade[20];
};

struct receita{
    char nome[25];
    int qIngredientes;
    struct ingrediente ingredientes[30];
};

void main() {
    struct receita receitas[5];
    char br[25];
    int i, j, ver;

    for (i = 0; i < 5; i++) {
        printf("\nRECEITA %d", i + 1);

        setbuf(stdin, NULL);
        printf("\nNome: ");
        fgets(receitas[i].nome, 25, stdin);

        printf("Quantidade de ingreditentes: ");
        scanf("%d", &receitas[i].qIngredientes);

        for (j = 0; j < receitas[i].qIngredientes; j++) {
            printf("\nIgrediente %d", j + 1);

            setbuf(stdin, NULL);
            printf("\n- Nome: ");
            fgets(receitas[i].ingredientes[j].nome, 25, stdin);

            setbuf(stdin, NULL);
            printf("- Quantidade: ");
            fgets(receitas[i].ingredientes[j].quantidade, 20, stdin);
        }
        printf("\n");
    }

    printf("\n==================================================================");

    while (1) {
        printf("\n\nBUSCAR RECEITA");

        setbuf(stdin, NULL);
        printf("\nNome: ");
        fgets(br, 25, stdin);

        if (strcmp(br, "\n") == 0) break;

        ver = 0;

        for (i = 0;  i < 5; i++) {
            if (strcmp(receitas[i].nome, br) == 0) {
                printf("\n%s", receitas[i].nome);

                for (j = 0; j < receitas[i].qIngredientes; j++) {
                    printf("- %s %s\n", receitas[i].ingredientes[j].quantidade, receitas[i].ingredientes[j].nome);
                }

                ver = 1;
            }
        }

        if (ver == 0) {
            printf("\nReceita nao encontra\n");
        }
    }
}