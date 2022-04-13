#include <stdio.h>
int main(){
	
	int num[3];
	int i;
	
	for (i=0; i<3; i++){
		printf("Digite o numero: ");
		scanf(" %d", &num[i]);
	}
	
	for(i=3; i>=0; i--){
		
		printf("%d",num[i]);
		
	}
	return 0;
}
