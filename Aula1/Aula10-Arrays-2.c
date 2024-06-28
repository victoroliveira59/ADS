 #include <stdio.h>

 int i, flag, codigo;
 int produtos[10];

 main(){
 
    for (i=0; i<10; i++){
        printf("Informe o codigo do produto: \n");
        scanf("%d", &produtos[i]);
    }
        flag=0;
        //utilizado para sinalizar se achou ou não achou
            printf("Informe o código para a pesquisa\n");
            scanf("%d", &codigo);
        for (i=0; i<10; i++)
            if (produtos[i]==codigo) {
                flag=1;
                printf("O Código foi encontrado\n\n");
        }
        if (flag==0)
            printf("Código do produto não encontrado");
 }