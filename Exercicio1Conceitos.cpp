#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1, n2, soma;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	if (n1 <= 0) {
		printf("\nNumero menor ou igual a zero");
	}
	else{
		printf("\nDigite o segundo numero: ");
		scanf("%d", &n2);
		
		if (n2 <= 0){
			printf("\nNumero menor ou igual a zero");
		}
		else{
			soma = n1 + n2;
			printf("\nA soma dos numeros sao: %d", soma);
		}
	}
	
}
	

	

