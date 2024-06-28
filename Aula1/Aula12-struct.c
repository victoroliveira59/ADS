#include <stdio.h>

struct
    registroAluno { //tipo definido
        int id;
        char nome[50];
        char endereco[50];
    };
    
    
int main() {
	struct registroAluno aluno;
    scanf("%d", &aluno.id);
    scanf("%s", aluno.nome); //qual o problema do scanf no tratamento de string
    scanf("%s", aluno.endereco);

    printf("Id do Aluno.............: %i\n", aluno.id);
    printf("Nome do Aluno...........: %s\n", aluno.nome);
    printf("Endereco do Aluno.......: %s\n", aluno.endereco);
    
}
