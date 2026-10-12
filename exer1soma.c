#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int n1,n2,soma;
	
	printf("Digite o primeiro numero ex(1,2,3): ");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero ex(1,2,3): ");
	scanf("%d", &n2);
	
	if(n1 <=0 || n2 <=0){
		printf("\nNumero invalido, digite novamento...");
	}
	else{
		soma =  n1 + n2;
		
		if (soma <= 10){
			printf("\nSoma dos numero devem ser maior que 10");
		}
		else{
			printf("\nSoma dos numero eh: %d \n",soma);
		}
	}

	
	
	system("\npause");
	return 0;
	
		
}

