#include <stdio.h>

main(){
	
int contador, conta_aprov, conta_rec;
float nota1, nota2, media, media_geral, soma;
conta_aprov = conta_rec = soma = 0;
contador=1;
while (contador<10) { // controle do laço de repetição por contador
	printf("Aluno nro %d: \n", contador);
	printf("Digite a nota 1: \n");
	scanf("%f", &nota1);
	printf("Digite a nota 2: \n");
	scanf("%f", &nota2);
	media = (float)(nota1+nota2*2)/3;
	printf("Média: %.2f\n\n", media);
	printf("***********\n");
	soma+=media;
	(media>6.0) ? conta_aprov++ : conta_rec++;
	contador++;
}
	media_geral = (float)(soma/contador);
	printf("Nro de alunos aprovados: %d\n", conta_aprov);
	printf("Nro de alunos reprovados: %d\n", conta_rec);
	printf("Média geral da turma: %.2f\n", media_geral);
}
