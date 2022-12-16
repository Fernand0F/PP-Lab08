#include <stdio.h>
#include <string.h>

struct birth{
    int dia, mes, ano;
};

struct funcionario{
    char nome[50], sexo, cargo[30];
    int idade, cpf, setor;
    float salario;
    struct birth nascimento;
};

void main() {
    struct funcionario func;

    printf("CADASTRO");

    printf("\nNome: ");
    fgets(func.nome, 50, stdin);

    printf("Idade: ");
    scanf("%d", &func.idade);

    setbuf(stdin, NULL);

    printf("Sexo [M/F]: ");
    scanf("%c", &func.sexo);

    printf("CPF: ");
    scanf("%d", &func.cpf);

    printf("Data de nascimento");
    printf("\nDia: ");
    scanf("%d", &func.nascimento.dia);
    printf("Mes: ");
    scanf("%d", &func.nascimento.mes);
    printf("Ano: ");
    scanf("%d", &func.nascimento.ano);

    printf("Codigo do setor: ");
    scanf("%d", &func.setor);

    setbuf(stdin, NULL);

    printf("Cargo: ");
    fgets(func.cargo, 30, stdin);

    printf("Salario: ");
    scanf("%f", &func.salario);

    printf("============================================");

    printf("\n\nDados do Funcionario");
    printf("\n\nNome..............: %s", func.nome);
    printf("Idade.............: %d", func.idade);
    printf("\nSexo..............: %c", func.sexo);
    printf("\nCPF...............: %d", func.cpf);
    printf("\nData de Nascimento: %d/%d/%d", func.nascimento.dia, func.nascimento.mes, func.nascimento.ano);
    printf("\nSetor.............: %d", func.setor);
    printf("\nCargo.............: %s", func.cargo);
    printf("Salario...........: %.2f", func.salario);
}