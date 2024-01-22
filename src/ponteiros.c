#include <stdio.h>

int main()
{

    struct tempo
    {
        int hora;
        int minuto;
        int segundo;
    };

    struct tempo tempo1, *tempo_ponteiro;

    tempo_ponteiro = &tempo1;

    tempo_ponteiro->hora = 02;
    tempo_ponteiro->minuto = 34;
    tempo_ponteiro->segundo = 11;

    printf("Pegando os valores atribuidos ao ponteiro tempo_ponteiro->hora com ->, que e igual a (*tempo_ponteiro).hora ou .minuto...\n");
    printf("%i:%i:%i\n\n", tempo_ponteiro->hora, tempo_ponteiro->minuto, tempo_ponteiro->segundo);
    printf("Pegando os valores atribuidos ao ponteiro de forma automatica, usando *tempo_ponteiro, que substitui automaticamente os membros de forma respectiva\n");
    printf("%i:%i:%i\n\n", *tempo_ponteiro);
    printf("Pegando os valores atribuidos a tempo1 de forma indireta\n");
    printf("%i:%i:%i\n", tempo1.hora, tempo1.minuto, tempo1.segundo);

    return 0;
}
