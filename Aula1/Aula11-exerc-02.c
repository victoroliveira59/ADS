#include <stdio.h>

    int mat[4][4], soma,soma_diag, i, j;


int main(){
   printf("Digite os valores inteiros para uma matriz 4x4\n\n");

   for(i=0; i<4; i++)
    for(j=0; j<4; j++){
        printf("Digite o elemento (%i, %i) da matriz: ",i ,j);
        scanf("%i", &mat[i][j]);
        soma+=mat[i][j];
        if(i==j) //Somando a Diagonal Principal
            soma_diag+=mat[i][j];
    }
    printf("\n\nA soma dos nros da matriz 4x4 foi %i", soma);
    printf("\n\nA soma dos nros da Diagonal Principal foi  %i", soma_diag);
}
