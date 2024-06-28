//Escreva um codigo que ler 10 valores e exibe os maiores que 10 e suas respectivas posições
#include <stdio.h>

int i, cont_pos, cont_neg;
int nros[10];

int main()
{
    for(i=0; i<10; i++){
        printf("Digite um nro: ");
        scanf("%i", &nros[i]);
    }
   
    for (i=0; i<10; i++){
        if (nros[i] > 0)
            cont_pos++;
        if (nros[i] < 0)
            cont_neg++;    
    }

    printf("\n\nO total de numeros negativos e: %i \n", cont_neg);
    printf("O total de numeros positivos e: %i \n", cont_pos);
}

