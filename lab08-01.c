#include <stdio.h>

struct horario{
    int hora, minuto, segundo;
};

struct data{
    int dia, mes, ano;
};

struct compromisso{
    struct data date;
    struct horario hour;
    char descricao[200];
};