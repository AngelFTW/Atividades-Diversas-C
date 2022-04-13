#include	<stdio.h>
#include	<locale.h>
#include	<string.h>

typedef struct {
	int 	nro_loja;
	char	nome[124];
	char	endereco[256];
	char	cidade[256];
	float	faturamento;
} Loja;
int main()
{
	Loja lojas[4];
	int i;
	
	for (i=0; i<4; i++){
		printf("Digite o nome da loja: ");
		fgets(lojas[i].nome,20,stdin);
		lojas[i].nome[strlen(lojas[i].nome) - 1] = '\0';
		
		printf("Digite 0 para matriz e 1 para filial: ");
		scanf("%f",&lojas[i].nro_loja);
		fflush(stdin);
		
		printf("Digite o endereco: ");
		fgets(lojas[i].endereco,30,stdin);
		lojas[i].endereco[strlen(lojas[i].endereco) - 1] = '\0';
		
		printf("Digite a cidade: ");
		fgets(lojas[i].cidade,20,stdin);
		lojas[i].cidade[strlen(lojas[i].cidade) - 1] = '\0';

		
		printf("Digite o faturamento total: ");
		scanf("%f",&lojas[i].faturamento);
		fflush(stdin);
		
	}
	printf("\n Informacoes das lojas: \n");
	
	for(i=0; i<4;i++){
		printf("\n%s, %d, %s, %s, %f\n",lojas[i].nome, lojas[i].nro_loja, lojas[i].endereco, lojas[i].cidade, lojas[i].faturamento);
	}
	

}
