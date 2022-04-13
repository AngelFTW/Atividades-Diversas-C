#include <stdio.h>
#include <string.h>

struct data{
	int dia,ano;
	char mes[10];
};

int main(){
	
	struct data d1;
	
	
	printf("Digite o dia: ");
	scanf("%d", &d1.dia);
	fflush(stdin);
	
	printf("\nDigite o mes(por extenso): ");
	fgets(d1.mes,10,stdin);
	d1.mes[strlen(d1.mes)-1] = ' ';
	
	printf("\nDigite ano: ");
	scanf("%d",&d1.ano);
	
	printf("%d/%s/%d", d1.dia, d1.mes, d1.ano);
	
	return 0;
	
}
