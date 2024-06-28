#include <stdio.h>
#include <ctype.h>

    char txt[100];
    int caractere, cont_A, cont_E, cont_I, cont_O, cont_U, total;

int main(){


    printf("Digite o texto: ");
    fflush(stdin);
    gets(txt);

    for(caractere = 0; txt[caractere] !='\0'; caractere++){
        if (toupper(txt[caractere]) == 'A')
            cont_A++;
        if (toupper(txt[caractere]) == 'E')
            cont_E++;
        if (toupper(txt[caractere]) == 'I')
            cont_I++;
        if (toupper(txt[caractere]) == 'O')
            cont_O++;
        if (toupper(txt[caractere]) == 'U')
            cont_U++;
    }


    total = cont_A+cont_E+cont_I+cont_O+cont_U;

    printf("Vogal A: \t %i\n", cont_A);
    printf("Vogal E: \t %i\n", cont_E);
    printf("Vogal I: \t %i\n", cont_I);
    printf("Vogal O: \t %i\n", cont_O);
    printf("Vogal U: \t %i\n", cont_U);
    printf("\t\t -- \n");
    printf("Total..:\t %i\n ", total);
}
