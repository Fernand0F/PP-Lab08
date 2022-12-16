#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct aluno{
    char nome[50];
    int matricula;
    float p1, p2, p3;
};

void main() {
    int cmd, i, maiorNota, media;
    struct aluno alunos[5];
    float mediaAnterior, mediaAtual, m;

    while (1) {
        printf("\n[ 0 ] Cadastrar alunos\n");
        printf("[ 1 ] Aluno com maior nota na primeira prova\n");
        printf("[ 2 ] Aluno com maior media\n");
        printf("[ 3 ] Aluno com menor media\n");
        printf("[ 4 ] Aprovacoes\n");
        printf("[ 5 ] sair\n");

        printf("Opcao: ");
        scanf("%d", &cmd);

        if (cmd == 5) break;

        switch (cmd) {
            case 0:

                system("cls");

                for (i = 0; i < 5; i++) {
                    setbuf(stdin, NULL);

                    printf("\nNome: ");
                    fgets(alunos[i].nome, 50, stdin);

                    printf("Matricula: ");
                    scanf("%d", &alunos[i].matricula);

                    printf("Nota P1: ");
                    scanf("%f", &alunos[i].p1);

                    printf("Nota P2: ");
                    scanf("%f", &alunos[i].p2);

                    printf("Nota P3: ");
                    scanf("%f", &alunos[i].p3);
                }

                system("cls");

                break;

            case 1:

                system("cls");

                maiorNota = 0;

                for (i = 0; i < 5;  i++) {
                    if(alunos[maiorNota].p1 < alunos[i].p1) {
                        maiorNota = i;
                    }
                }

                printf("Aluno com maior nota na P1:");
                printf("\nNome.....: %s", alunos[maiorNota].nome);
                printf("Matricula: %d\n", alunos[maiorNota].matricula);
                printf("Nota.....: %.2f\n", alunos[maiorNota].p1);

                break;

            case 2:

                system("cls");

                media = 0;

                for (i = 0; i < 5;  i++) {
                    mediaAnterior = (alunos[media].p1 + alunos[media].p2 + alunos[media].p3) / 3.0;
                    mediaAtual = (alunos[i].p1 + alunos[i].p2 + alunos[i].p3) / 3.0;

                    if(mediaAnterior < mediaAtual) {
                        media = i;
                    }
                }

                printf("Aluno com maior media geral:");
                printf("\nNome.....: %s", alunos[media].nome);
                printf("Matricula: %d\n", alunos[media].matricula);
                printf("Media....: %.2f\n", (alunos[media].p1 + alunos[media].p2 + alunos[media].p3) / 3.0);

                break;

            case 3:

                system("cls");

                media = 0;

                for (i = 0; i < 5;  i++) {
                    mediaAnterior = (alunos[media].p1 + alunos[media].p2 + alunos[media].p3) / 3.0;
                    mediaAtual = (alunos[i].p1 + alunos[i].p2 + alunos[i].p3) / 3.0;

                    if(mediaAnterior > mediaAtual) {
                        media = i;
                    }
                }

                printf("Aluno com menor media geral:");
                printf("\nNome.....: %s", alunos[media].nome);
                printf("Matricula: %d\n", alunos[media].matricula);
                printf("Media....: %.2f\n", (alunos[media].p1 + alunos[media].p2 + alunos[media].p3) / 3.0);

                break;

            case 4:

                system("cls");

                for (i = 0; i < 5; i++) {

                    m = (alunos[i].p1 + alunos[i].p2 + alunos[i].p3) / 3.0;

                    printf("Nome.....: %s", alunos[i].nome);
                    printf("Matricula: %d\n", alunos[i].matricula);
                    printf("Media....: %.2f", m);
                    if (m >= 6.0) {
                        printf("\nSituacao.: %s\n\n", "Aprovado");
                    }
                    else {
                        printf("\nSituacao.: %s\n\n", "Reprovado");
                    }

                }
                

                break;

        }

        printf("====================================================");

    }

}