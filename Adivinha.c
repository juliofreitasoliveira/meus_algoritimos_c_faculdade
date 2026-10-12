#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int numero, chute, i;
	int acertou = 0;
	
	srand(time(NULL));
	
	numero = rand() % 11;
	
	printf("===JOGO DE ADIVINHA===\n");
	printf("Tente adivinha um numero que sorteiei entre 0 e 10.\n");
	printf("\nVoce tem 3 tentativas");
	
	for (i = 1; i <= 3; i++) {
		printf("\nTentativa %d de 3 - Digite seu palpite: \n", i);
		scanf("%d", &chute);
		
		if(chute == numero){
			
			printf("Parabens, voce acertou!\n\n");
			acertou = 1; 
			break;
		}
		else if (chute < numero){
			printf("O numero gerado eh maior!\n\n");
		}
		else{
			printf("O numero eh menor\n\n");
		}
	}
	if (acertou == 0){
		printf("Suas tentativas expiraram. O numero aleatorio eh: %d\n\n", numero);
	}
	
	system("pause");
	return 0;
} 
