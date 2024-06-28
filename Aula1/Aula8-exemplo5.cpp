#include <stdio.h>

int nro, linha;
 

int main() {
	
	for(nro = 1; nro < 10; nro++){
		printf("Tabuada do %d \n\n", nro);
		
		for (linha=1; linha<11;linha++)	
			printf("%d x %d = %d\n", nro ,linha, nro*linha);
		
	printf("*************\n\n");
	}
}
