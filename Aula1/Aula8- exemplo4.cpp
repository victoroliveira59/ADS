#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int contador, conta_aprov, conta_rec;
float nota1, nota2, media, media_geral, soma;
main(){
conta_aprov = conta_rec = soma = 0;
for(contador = 0; contador < 10; contador++){ //laço de 0 a 9 (10 iterações)
printf("\nDigite a nota 1: ");
scanf("%f", &nota1);
printf("Digite a nota 2: ");
scanf("%f", &nota2);
media = (float)(nota1+nota2*2)/3;
printf("Media: %.2f\n", media);
printf("***********\n");
soma+=media;
(media>6.0) ? conta_aprov++ : conta_rec++;
printf("\nDeseja continuar? <S | N>");
if (toupper(getche()) =='N') //sentinela
break;
}
media_geral = (float)(soma/(contador+1)); //faz a média apenas do que foi digitado, pois existe o break dentro do for
printf("\nNro de alunos aprovados: %d", conta_aprov);
printf("\nNro de alunos reprovados: %d", conta_rec);
printf("\nMedia geral da turma: %.2f", media_geral);
}
