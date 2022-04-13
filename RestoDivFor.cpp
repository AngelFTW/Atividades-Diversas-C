#include <stdio.h>
int main(){
	
	int num=1;
	
	for (num>1; num < 10000000; num++){
		
		if (num%11==0 && num%13==0 && num%17==0){
			
			printf("%d", num);
			break;
			
		}
		
	}
	
	return 0;
}
