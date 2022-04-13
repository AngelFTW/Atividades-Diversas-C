#include <stdio.h>
int main(){
	
	int num[6];
	int i;
	int pos=0;
	int qntd;
	
	for (i=0; i<6; i++){
		printf("Digite o numero: ");
		scanf(" %d", &num[i]);
		if (num[i]==0){
			printf("Digite um numero diferente de zero: \n");
			i--;
		}
	}
	
	for (i=0; i<6; i++){
		
		if(num[i]> 0){
			
			pos+=num[i];
		}
	
		if(num[i]< 0){
			
			qntd++;
		}
	
	
		
	}
	
	printf("positivos: %d e neg %d",pos, qntd);
	return 0;
}
