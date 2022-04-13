#include <stdio.h>
int main(){
	
	int num;
	int cont =0;
	int soma=0;
	
	
	for (num=1; num <=100; num++){
		
		if (num%5 !=0 ){
			
			soma+=num;
			
		}
		
	}
	printf("%d", soma);
	return 0;
}
