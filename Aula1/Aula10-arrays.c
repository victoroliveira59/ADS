 #include <stdio.h>

 main(){

 int i;
 float notas[10], media_geral, soma_media;
 soma_media=0;
    for (i=0; i<10; i++){
        printf("Informe a nota: \n");
        scanf("%f", &notas[i]);
        soma_media+=notas[i];
    }
    media_geral = (float) soma_media / 10;
    printf("A média geral foi %f\n\n", media_geral);
    for (i=0; i<10; i++)
        if (notas[i]>media_geral)
            printf("Média maior que a média geral: %d = %f\n", i, notas[i]);
}