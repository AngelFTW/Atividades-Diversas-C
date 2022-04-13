#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main(){
	
	int pot=0;
	int pot3 = 0;
	int num=0;
	
	while (pot<=15){
		
		pot3 = pow(3, num);
		num++;
		pot++;
		printf("%d\n", pot3);
	}
	
}
