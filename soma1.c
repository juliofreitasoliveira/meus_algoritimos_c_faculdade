#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n1,n2,soma;
	
	printf("Vamos calcular a soma de dois numeros por ex (x + x)\n");
	printf("\nDigite o primeiro numero por ex (1,2,3...): ");
	scanf("%d", &n1);
	printf("\nDigite o segundo numero por ex (1,2,3...): ");
	scanf("%d", &n2);
	
	if (n1 <=0 || n2 <=0){
		printf("\nNumero invalido digite novamente...\n");
	}
	else{
		soma = n1 + n2;
		
		if (soma <= 10){
			printf("\nA soma dos numero deve ser no minimo maior que 10...\n");
		}
		else{
			printf("\nSoma dos numero eh: %d", soma);		}
	}
	
	system("\npause");
	return 0;
}
