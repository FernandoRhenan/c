#include <stdio.h>

void testeVariavel(int x);
void testePonteiro(int *pX);

int main()
{
    int teste = 1;
    int *pTeste = &teste;

    // Copia o valor de teste e aloca um novo endereço de memória para essa cópia, assim usando mais memória e não modificando o valor de teste.
    testeVariavel(teste);

    // Modifica o valor de teste, pois a função teste ponteiro recebe o endereço de pTeste que tem o valor o endereço de teste, assim, quando modificar esse endereço, estará modificando o valor da variável teste.
    testePonteiro(pTeste);

    printf("%i\n", teste);

    return 0;
}

void testeVariavel(int x)
{
    ++x;
}

void testePonteiro(int *pX)
{
    ++*pX;
}