#include <stdio.h>

    float fluxo[30][2];
    float saldo;
    int i, j;


int main(){
   printf("Digite os valores para as entradas e saidas do Mes (30 DIAS)\n\n");

   for(i=0; i<30; i++){ // Intervalo de [0, a 29] 30x
    printf("Digite o valor de entrada e saida para o dia %i: ", i+1);
    scanf("%f %f", &fluxo[i][0],&fluxo[i][1]);
    printf(" ==> %.2f\n", fluxo[i][0] - fluxo[i][1]);
    saldo+=(fluxo[i][0] - fluxo[i][1]);
   }
   printf("\n\n O saldo do Mes foi %.2f", saldo);
}
