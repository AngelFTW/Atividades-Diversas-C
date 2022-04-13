#include <stdio.h>
#include <string.h>

int main(){
	
	char fr1[20], fr2[20];
	
	printf("Digite a primeira frase: ");
	gets(fr1);
	
	printf("\nDigite a segunda frase: ");
	gets(fr2);
	
	if (strcmp(fr1,fr2) == 0){
		printf("\nFrases sao iguais");
	}
	else{
		printf("\nAs frases sao diferentes");
		strcat(fr1," ");
		strcat(fr1,fr2);
		printf("\nResultado: %s",fr1);
	}
	
	return 0;
	
}
