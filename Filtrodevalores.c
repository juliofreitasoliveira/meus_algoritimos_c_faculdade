#include <stdio.h>

int main(){
	
	int contador = 0;
	int N_atual;
	int i;
	
	for (i = 1; i <= 8; i++){
		
		printf("Digite um numero inteiro e: ");
		scanf("%d", &N_atual);
		
		if (N_atual > 10){
			
			contador++;
		}
		
	}
	printf("\nOs numeros maiores que 10 sao: %d", contador);
	
	system("pause");
	return 0;
}
