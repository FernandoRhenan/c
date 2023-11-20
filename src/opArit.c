#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a, b;	
		
	printf("Digite o primeiro numero: ");	
	scanf("%d", &a);
	printf("Digite o segundo numero: ");	
	scanf("%d", &b);
	
	printf("Soma: %d", a + b);
	printf("Subtracao: %d", a - b);
	printf("Multiplicacao: %d", a * b);
	printf("Divisao: %d", a / b);
		
	system("pause");
	
}

