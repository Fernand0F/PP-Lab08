#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct end {
    char rua[30], bairro[30], cidade[20], estado[15];
    int cep;
};

struct cadastro{
    char nome[30], estadoCivil[15], sexo, id[15];
    struct end endereco;
    float salario;
    int cpf, telefone, idade;
};

void main() {
    struct cadastro pessoas[5];
    char idc[15];
    int i, temp, ver = 0;

    for (i = 0; i < 5; i++) {
        printf("\nPESSOA %d", i + 1);

        setbuf(stdin, NULL);
        printf("\nNome: ");
        fgets(pessoas[i].nome, 30, stdin);

        setbuf(stdin, NULL);
        printf("Endereco:");
        printf("\nRua: ");
        fgets(pessoas[i].endereco.rua, 30, stdin);

        setbuf(stdin, NULL);
        printf("Bairro: ");
        fgets(pessoas[i].endereco.bairro, 30, stdin);

        setbuf(stdin, NULL);
        printf("Cidade: ");
        fgets(pessoas[i].endereco.cidade, 20, stdin);

        setbuf(stdin, NULL);
        printf("Estado: ");
        fgets(pessoas[i].endereco.estado, 15, stdin);

        printf("CEP: ");
        scanf("%d", &pessoas[i].endereco.cep);

        printf("Salario: ");
        scanf("%f", &pessoas[i].salario);

        setbuf(stdin, NULL);
        printf("Identidade: ");
        fgets(pessoas[i].id, 15, stdin);

        printf("CPF: ");
        scanf("%d", &pessoas[i].cpf);

        setbuf(stdin, NULL);
        printf("Estado civil: ");
        fgets(pessoas[i].estadoCivil, 15, stdin);

        printf("Telefone: ");
        scanf("%d", &pessoas[i].telefone);

        printf("Idade: ");
        scanf("%d", &pessoas[i].idade);

        setbuf(stdin, NULL);
        printf("Sexo [M/F]: ");
        scanf("%c", &pessoas[i].sexo);
    }

    printf("===========================================");

    /*===============================================================================*/

    temp = 0;
    for (i = 1; i < 5; i++) {
        if (pessoas[temp].idade < pessoas[i].idade) temp = i;
    }
    printf("\n\nPessoa com maior idade");
    printf("\nNome: %s", pessoas[temp].nome);
    printf("Idade: %d", pessoas[temp].idade);

    /*===============================================================================*/

    printf("\n\n\nPessoas do sexo masculino\n");
    for (i = 0; i < 5; i++) {
        if ((pessoas[i].sexo == 'm')||(pessoas[i].sexo == 'M')) {
            printf("- %s", pessoas[i].nome);
        }
    }

    /*===============================================================================*/

    printf("\n\nPessoas com salario maior que 1000.00\n");
    for (i = 0; i < 5; i++) {
        if (pessoas[i].salario > 1000.0) {
            printf("%s", pessoas[i].nome);
            printf("- Salario: %.2f\n", pessoas[i].salario);
        }
    }

    /*===============================================================================*/

    while (1) {
        setbuf(stdin, NULL);
        printf("\n\nDigite uma identidade: ");
        fgets(idc, 15, stdin);

        for (i = 0;  i < 5; i++) {
            if (strcmp(pessoas[i].id, idc) == 0) {
                printf("\nNome: %s", pessoas[i].nome);
                printf("Endereco:");
                printf("\nRua: %s", pessoas[i].endereco.rua);
                printf("Bairro: %s", pessoas[i].endereco.bairro);
                printf("Cidade: %s", pessoas[i].endereco.cidade);
                printf("Estado: %s", pessoas[i].endereco.estado);
                printf("Salario: %.2f", pessoas[i].salario);
                printf("\nCPF: %d", pessoas[i].cpf);
                printf("\nEstado civil: %s", pessoas[i].estadoCivil);
                printf("Telefone: %d", pessoas[i].telefone);
                printf("\nIdade: %d", pessoas[i].idade);
                printf("Sexo: %c\n", pessoas[i].sexo);

                ver = 1;
            }
        }

        if (ver == 1) break;

        printf("Id nao encontrada");
    }
}