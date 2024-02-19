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
    printf("%i:%i:%i\n\n", tempo1.hora, tempo1.minuto, tempo1.segundo);

    struct tempo_membros_sendo_ponteiros
    {
        int *pHora;
        int *pMinuto;
        int *pSegundo;
    };

    struct tempo_membros_sendo_ponteiros tempo1_msp;

    int hora1 = 21;
    int minuto1 = 13;
    int segundo1 = 52;

    tempo1_msp.pHora = &hora1;
    tempo1_msp.pMinuto = &minuto1;
    tempo1_msp.pSegundo = &segundo1;

    printf("Pegando os valores de pHora que esta no endereco de hora1\n");
    printf("%i\n\n", *tempo1_msp.pHora);
    printf("Pegando os valores de hora1\n");
    printf("%i\n\n", hora1);
    printf("Pegando os valores de pHora, pMinuto e pSegundo que esta no endereco de hora1, minuto1 e segundo1\n");
    printf("%i:%i:%i", *tempo1_msp.pHora, *tempo1_msp.pMinuto, *tempo1_msp.pSegundo);

    // v_num é a variável que
    // será apontada pelo ponteiro
    int v_num = 10;

    // declaração de variável ponteiro
    int *ptr;

    // atribuindo o endereço da variável v_num ao ponteiro
    ptr = &v_num;

    printf("Utilizando ponteiros\n\n");
    printf("Conteudo da variavel v_num: %d\n", v_num);
    printf("Conteudo da variavel v_num atraves do ponteiro ptr: %d\n", *ptr);
    printf("Endereco da variavel v_num: %x \n", &v_num);
    printf("Conteudo da variavel ponteiro ptr: %x", ptr);

    return (0);
}
