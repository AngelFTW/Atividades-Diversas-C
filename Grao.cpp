#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main(){
	
	int pot=0;
	int pot3 = 0;
	int num=0;
	long long int soma;
	
	while (pot<=64){
		
		pot3 = pow(2, num);
		num++;
		pot++;
		soma= pot3-(pot3-1);
		printf("%d\n", pot3);
	}
	
}
