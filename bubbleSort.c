#include<stdlib.h>
#include<stdio.h>
#define TAM 8

int main(){

        int vetor[TAM];
        int i, numero = 0, alteracoes = 0;
        for(i= 0; i < TAM; i++){
            printf("Digite um numero para entrar no vetor: ");
                scanf("%d", &numero);
                vetor[i] = numero;
            }
            printf("\n");
            printf("Vetor antes da ordenacao:\n");
            for(i = 0; i < TAM; i++){
                numero = vetor[i];
                printf("%d ", numero);
            }
            alteracoes = 1;
            int temporario = 0;
            while(alteracoes > 0){
                alteracoes = 0;
                for(i = 0; i < TAM-1; i++){
                    if(vetor[i] > vetor[i + 1]){
                        temporario = vetor[i];
                        vetor[i] = vetor[i + 1];
                        vetor[i + 1] = temporario;
                        alteracoes = alteracoes + 1;
                    }
                }
            }
            printf("\n");
            printf("\nResultado da ordenação:\n");
                for(i= 0; i < TAM; i++){
                    numero = vetor[i];
                    printf("%d ", numero);
        }
        printf("\n");
        return 0;
}