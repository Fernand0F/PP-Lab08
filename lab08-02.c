#include <stdio.h>
#include <string.h>

struct cadastro{
    char nome[30], endereco[100];
    int idade;
};

void main() {
    struct cadastro pessoa;

    printf("Nome: ");
    fgets(pessoa.nome, 30, stdin);

    printf("Idade: ");
    scanf("%d", &pessoa.idade);

    setbuf(stdin, NULL);

    printf("Endereco: ");
    fgets(pessoa.endereco, 100, stdin);
}