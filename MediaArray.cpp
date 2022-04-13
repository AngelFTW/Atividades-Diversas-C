#include <stdio.h>
int main(){
	
	int prod[5];
	int i;
	int qtd50=0;
	int qtd=0;
	int qtd80=0;
	int soma;
	
	for (i=0; i<5; i++){
		printf("Digite o preco dos produtos: ");
		scanf(" %d", &prod[i]);
		}
	
	
	for (i=0; i<5; i++){
		soma+=prod[i];
		if(prod[i]<50){
			
			qtd50++;
		}else if(prod[i]>=50 && prod[i]<=80){
			qtd++;
		}else{
			qtd80++;
		}
		
	}
	
	printf("menos q 50: %d\nentre 50 e 80: %d\nmaior que 80:%d",qtd50, qtd, qtd80);

	printf("\nmedia: %d", soma/5);
	return 0;
}
