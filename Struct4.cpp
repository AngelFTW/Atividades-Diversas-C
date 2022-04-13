
#include <stdio.h>
#include <string.h>

typedef struct{
	char nome[10];
	float largura, comprimento, area;
} Comodo;

typedef struct{
	Comodo comodos[5];
	float area_total;
} Casa;

int main(void){
	Casa minhacasa;
	int i, qtd_comodos = 0;
	char resposta;
	float soma_area = 0;
	
	for(i=0; i<5; i++){
		qtd_comodos++;
		fflush(stdin);
		printf("Digite o nome do comodo: ");
		fgets(minhacasa.comodos[i].nome,10, stdin);
		minhacasa.comodos[i].nome[strlen(minhacasa.comodos[i].nome) - 1] = '\0';
		
		printf("Digite a largura: ");
		scanf("%f", &minhacasa.comodos[i].largura);
		
		printf("Digite o comprimento: ");
		scanf("%f", &minhacasa.comodos[i].comprimento);
		
		minhacasa.comodos[i].area =minhacasa.comodos[i].comprimento * minhacasa.comodos[i].largura ;
		soma_area += minhacasa.comodos[i].area;
		printf("Quer inserir mais um comodo? S ou N: ");
		scanf(" %c", &resposta);
		
		if(resposta == 'N')
			break;
	}
	
	minhacasa.area_total = soma_area;
	printf("\nArea total: %.2f\n", minhacasa.area_total);
	for(i=0; i<qtd_comodos; i++){
		printf("\n%s com area %f", minhacasa.comodos[i].nome, minhacasa.comodos[i].area);
	}
	
	return 0;
}
