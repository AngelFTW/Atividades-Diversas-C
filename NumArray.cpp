#include <stdio.h>
int main(){
	
	int num[3];
	int i;
	int maior=0;
	int indmaior;
	
	for (i=0; i<3; i++){
		printf("Digite o numero: ");
		scanf(" %d", &num[i]);
	}
	
	for (i=0; i<3; i++){
		
		if(num[i]> 0){
			
			maior = num[i];
			indmaior=i;
		}
		
	}
	
	printf("maior: %d e indice %d",maior, indmaior);
	return 0;
}
