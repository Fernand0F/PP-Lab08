#include <stdio.h>
#include <string.h>

struct date{
    int dia, mes, ano;
};

struct agenda{
    char compromisso[60];
    struct date data;
};

void main() {
    struct agenda ag[5];
    int i, ver, m, a;

    for (i = 0;  i < 5; i++) {
        printf("\nCOMPRIMISSO %d", i + 1);

        printf("\nDia: ");
        scanf("%d", &ag[i].data.dia);

        printf("Mes [1 - 12]: ");
        scanf("%d", &ag[i].data.mes);

        printf("Ano: ");
        scanf("%d", &ag[i].data.ano);

        setbuf(stdin, NULL);
        printf("Compromisso: ");
        fgets(ag[i].compromisso, 60, stdin);
    }

    while (1) {
        printf("\n========================================");

        printf("\n\nDigite um mes [1 - 12] [0 para parar]: ");
        scanf("%d", &m);

        if (m == 0) {
            break;
        }

        printf("Digite um ano: ");
        scanf("%d", &a);

        ver = 0;

        for (i = 0; i < 5; i++) {
            if ((ag[i].data.mes == m)&&(ag[i].data.ano == a)) {
                printf("\nData: %d/%d/%d", ag[i].data.dia, m, a);
                printf("\nCompromisso: %s", ag[i].compromisso);

                ver = 1;
            }
        }

        if (ver == 0) printf("\nSem compromissos nesse mes");
    }
}