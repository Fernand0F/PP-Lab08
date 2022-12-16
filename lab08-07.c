#include <stdio.h>
#include <string.h>

struct dados{
    char nome[50], endereco[100];
    int telefone;
};

void main() {
    struct dados cadastro01[5], cadastro02[5];
    int i, j, temp, count, len;

    for (i = 0; i < 5; i++){
        printf("\nPessoa %d", i + 1);

        setbuf(stdin, NULL);

        printf("\nNome: ");
        fgets(cadastro01[i].nome, 50, stdin);

        setbuf(stdin, NULL);

        printf("Endereco: ");
        fgets(cadastro01[i].endereco, 100, stdin);

        printf("Telefone: ");
        scanf("%d", &cadastro01[i].telefone);
    }

    for (i = 0; i < 5; i++) {
        temp = 0;

        for (j = 0; j < 5; j++) {
            count = 0;

            len = strlen(cadastro01[j].nome);

            while (1) {
                if (cadastro01[j].nome[count] < cadastro01[temp].nome[count]) {
                    temp = j; break;
                }
                else if (cadastro01[j].nome[count] > cadastro01[temp].nome[count]) {
                    break;
                }
                
                if (count > len) break;

                count++;
            }
        }

        strcpy(cadastro02[i].nome, cadastro01[temp].nome);
        strcpy(cadastro02[i].endereco, cadastro01[temp].endereco);
        cadastro02[i].telefone = cadastro01[temp].telefone;
        
        cadastro01[temp].nome[0] = 127;
    }

    printf("================================================");
    
    for (i = 0; i < 5; i++) {
        printf("\n\nNome....: %s", cadastro02[i].nome);
        printf("Endereco: %s", cadastro02[i].endereco);
        printf("Telefone: %d", cadastro02[i].telefone);
    }
}