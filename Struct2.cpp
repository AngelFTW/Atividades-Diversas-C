#include	<stdio.h>
#include	<locale.h>
#include	<string.h>

struct loja {
	int 	nro_loja;
	char	nome[124];
	char	endereco[256];
	char	cidade[256];
	float	faturamento;
};
int main()
{
	setlocale(0, "Portuguese");
	
	struct loja matriz;
	struct loja filial = { 1, "Filial da Loja Tenis", "Principal de Mangabeira", "Joao Pessoa", 545.77};
	// entrada
	matriz.nro_loja = 0;
	strcpy(matriz.nome,"Matriz Loja Tenis");
	strcpy(matriz.endereco, "Av Epitácio Pessoa 1234");
	strcpy(matriz.cidade, "Joao Pessoa");
	matriz.faturamento = 1000,00;

	// processamento

	// saída
	printf("MATRIZ\n");
	printf("A loja %d é a %s localizada na rua %s em %s com faturamento de %.2f\n",
				matriz.nro_loja, matriz.nome, matriz.endereco, matriz.cidade, matriz.faturamento);
				
	printf("FILIAL\n");
	printf("A loja %d é a %s localizada na rua %s em %s com faturamento de %.2f\n",
				filial.nro_loja, filial.nome, filial.endereco, filial.cidade, filial.faturamento);
	
}
