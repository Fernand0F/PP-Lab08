#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct livro{
    char titulo[30], autor[15];
    int ano;
};

void main() {
    struct livro livros[5];
    char temp[30];
    int i, ver;

    for (i = 0; i < 5; i++) {
        printf("\nLIVRO %d", i + 1);

        printf("\nTitulo: ");
        fgets(livros[i].titulo, 30, stdin);

        setbuf(stdin, NULL);

        printf("Autor: ");
        fgets(livros[i].autor, 15, stdin);

        printf("Ano: ");
        scanf("%d", &livros[i].ano);

        setbuf(stdin, NULL);
    }

    while (1) {
        ver = 0;

        printf("\n====================================");
        setbuf(stdin, NULL);
        printf("\nNome do livro: ");
        fgets(temp, 30, stdin);

        for (i = 0; i < 5; i++) {
            if (strcmp(temp, livros[i].titulo) == 0) {
                printf("\nTitulo: %s", livros[i].titulo);
                printf("Autor.: %s", livros[i].autor);
                printf("Ano...: %d\n", livros[i].ano);

                ver = 1;
            }
        }

        if (!(ver)) printf("LIVRO NAO ENCONTRADO!");
    }
}