#include <stdio.h>
#include <stdlib.h>






char* mostrarAprovacao(float media){
    char resultado[200];

    if(media >= 7){
        strcpy(resultado, "Aprovado!");
    }
    else{
        strcpy(resultado, "Reprovado!");
    }
    return resultado;
}







#define TAM 3




float divisor ( float notas[]){
    int contador;
    float resultado;
    float somanotas;

    for(contador = 0; contador < TAM; contador++){
    somanotas += notas[contador];
    resultado = somanotas / 3;
    }
    return resultado;
}



int main(){

int contador;
float notas[TAM];


for(contador = 0; contador < TAM; contador++){
printf("Digite a %dª nota do aluno: ", contador + 1);
scanf("%f", &notas[contador]);
}

float media_geral;

media_geral = divisor(notas);

printf("A média inserida equivale a: %.2f", media_geral);
printf("Media: %s", mostrarAprovacao(media_geral));

}