//Recebe n�meros inteiros positivos e calcula a m�dia deles
//Quando recebe o n�mero zero, encerra a execu��o, exibindo o valo da m�dia.

#include <stdio.h>

int main (void){
	int numero;
	int soma = 0;
	int contador = 0;
	
	printf("Digite um n�mero: ");
	scanf("%d", &numero);
	
	while(numero >= 0){
		if(numero == 0){
			break;
		}else{
			soma = soma + numero;
			contador++;
			printf("Digite um n�mero: ");
			scanf("%d", &numero);
		}
	}
	printf("A media e: %d", soma/contador);
	
	return 0;
}
