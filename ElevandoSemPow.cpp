#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main(){
	
	int pot=0;
	int pot3 = 0;
	int num=1;
	
	while (pot<15){
		
		pot3 = (num = num*3);
		pot++;
		printf("%d\n", pot3);
	}
	
}
