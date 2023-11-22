#include <stdio.h>
#include <stdlib.h>

int main()
{

	int a, b, soma, sub, div, mult, res;

	printf("Digite o primeiro numero:\n");
	scanf("%d", &a);
	printf("Digite o segundo numero:\n");
	scanf("%d", &b);

	printf("Valor de a: %d\nValor de b: %d\n", a, b);

	soma = a + b;
	sub = a - b;
	mult = a * b;
	div = a / b;
	res = a % b;

	printf("Soma: %d\n", soma);
	printf("Subtracao: %d\n", sub);
	printf("Multiplicacao: %d\n", mult);
	printf("Divisao: %d\n", div);
	printf("Resto da divisao: %d\n", res);

	// ++a Incrementa o valor de x antes de usar o valor atual.
	// a++ Utiliza o valor atual de x e, em seguida, incrementa x.

	printf("a++: %d\n", ++a);
	printf("a--: %d\n", --a);

	printf("a+=b: %d\n", a += b);
	printf("a-=b: %d\n", a -= b);
	printf("a*=b: %d\n", a *= b);
	printf("a/=b: %d\n", a /= b);

	system("pause");
}
