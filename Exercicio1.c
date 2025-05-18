/*Para um array A ler 5 números inteiros, formular 
um algoritmo que determine o maior elemento 
deste array*/
#include <stdio.h>
#define T 5
int main(){
    int vetor[T];
    int maior=0;

    for(int i=0; i<T; i++){
        printf("Digite um numero inteiro: ");
        scanf("%i", &vetor[i]);
    }

    for(int i=0; i<T; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }
    printf("O maior numero vetor eh: %i", maior);
    return 0;
}
