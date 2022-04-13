#include <stdio.h>
int main(){
	
	int num[6];
	int i;
	
	for (i=0; i<6; i++){
		printf("Digite o numero: ");
		scanf("%d", &num[i]);
	}
	for(i=0; i<6; i++){
		
		if(num[i]>0){
			
			printf("%d", num[i]);
		}
		
		
	}
	

		

	return 0;
}
