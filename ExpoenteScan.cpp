#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main(){
	
	int base;
	int exp;
	int pot;
	
	printf("Digite a base: ");
	scanf("%d", &base);
	
	printf("Digite o expoente: ");
	scanf("%d", &exp);
	
	pot = pow(base,exp);
	
	printf("Resultado: %d", pot);
	
}
