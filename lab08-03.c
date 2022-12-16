#include <stdio.h>
#include <string.h>

struct aluno{
    char nome[30], curso[30];
    int matricula;
};

void main() {
    struct aluno alunos[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("ALUNO %d", i+1);

        printf("\nNome: ");
        fgets(alunos[i].nome, 30, stdin);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        setbuf(stdin, NULL);

        printf("Curso: ");
        fgets(alunos[i].curso, 30, stdin);

        printf("\n");
    } 

    printf("===========================================================");
    printf("\n                      DADOS CADASTRADOS\n");

    for (i = 0; i < 5; i++ ){
        printf("\nALUNO %d", i+1);
        printf("\nNome: %s", alunos[i].nome);
        printf("Matricula: %d", alunos[i].matricula);
        printf("\nCurso: %s", alunos[i].curso);
    }
}