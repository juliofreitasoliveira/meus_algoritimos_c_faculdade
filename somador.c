#include <stdio.h>

int main (){
	
	int N_atual;
	int soma = 0;
	int i;
	
	for (i = 1; i <= 5; i++){
		
		printf("Digite cinco numeros para estar somando: ");
		scanf("%d", &N_atual);
		
		soma = soma + N_atual;
		
	}
	printf("\nO valor dos numeros digitados são: %d", soma);
	
	system("pause");
	return 0;
}
