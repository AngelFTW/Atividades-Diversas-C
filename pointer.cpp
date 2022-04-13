#include <stdio.h>

int main(){
	
	int array[6];
	int i;
	int *p;
	
	p = &array[0];
	
	for (i=0; i<6; i++){
		
		p=&array[i];
		printf("Digite o %d do array: ",i);
		scanf("%d",p);
		p++;
	}
	
	p = &array[0];
	
	for (i=0; i<6; i++){
	
		printf("\nNumero na posicao %p do array: %d", p, *p);
		p++;
	}
}
