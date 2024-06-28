#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int nro, nro_usr;


int main(){
	srand(time(NULL));
	
	nro = 1+rand()%10;
	
	printf("Tente advinhar o numero de 1 a 10 \n\n");
	printf("Tentativa 01: Digita o numero que eu pensei: ");
	scanf("%i",&nro_usr);	
		
	if (nro == nro_usr)
		printf("Parabens voce conseguiu!!!");
	else{
		printf("Voce errou: Resta apenas duas chances: ");
		scanf("%i",&nro_usr);
		if (nro == nro_usr)
			printf("Parabens voce conseguiu na segunda tentativa!!!");
		else{
			printf("Voce errou: Resta apenas uma chance: ");
			scanf("%i",&nro_usr);
			if (nro == nro_usr)
				printf("Parabens voce conseguiu na ultima tentativa!!!");
			else{
				printf("Suas chances acabaram :( ");
				printf("O numero correto e %i ", nro);
			}
		}
	}

}
