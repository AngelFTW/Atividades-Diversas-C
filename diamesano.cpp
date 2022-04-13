#include <stdio.h>
#include <string.h>

int main(){
	
	char dia[20], mes[20],ano[20];
	
	printf("Digite o dia: ");
	gets(dia);
	
	printf("\nDigite o mes(por extenso): ");
	gets(mes);
	
	printf("\nDigite ano: ");
	gets(ano);
	
	
		strcat(dia,"/");
		strcat(mes,"/");
		strcat(dia,mes);
		strcat(dia,ano);
		printf("%s",dia);
	
	return 0;
	
}
