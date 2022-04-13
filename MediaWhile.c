//Recebe números inteiros positivos e calcula a média deles
//Quando recebe o número zero, encerra a execução, exibindo o valo da média.

#include <stdio.h>

int main (void){
	int numero;
	int soma = 0;
	int contador = 0;
	
	printf("Digite um número: ");
	scanf("%d", &numero);
	
	while(numero >= 0){
		if(numero == 0){
			break;
		}else{
			soma = soma + numero;
			contador++;
			printf("Digite um número: ");
			scanf("%d", &numero);
		}
	}
	printf("A media e: %d", soma/contador);
	
	return 0;
}
